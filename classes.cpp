#include <iostream>

class Dog {
  private:
    std::string name;
    int age;
    const std::string kind;
    const int amount_of_legs;

  public:
    // Dog() {
    //   name = "Ollie";
    //   age = 3;
    // }
    // You can use this constructor as default constructor using default values for the constructor parameters
    Dog(std::string nom = "Ollie", int num = 3) : kind("Mamal"), amount_of_legs(4) {
      name = nom;
      age = num;
    }

    void summary() {
      std::cout << name << " is " << age << " years old.\n";
      std::cout << "This animal is a " << kind << " and has " << amount_of_legs << " legs\n";
     }

    // Destructor method, get's called when an object is destroyed. When an object moves out of scope or is explicitly deleted. 
    ~Dog() {
      std::cout << "Removed object with name: " << name <<std::endl;
    }
};


int main() {

  Dog my_dog;
  my_dog.summary();

  Dog my_other_dog("Doc", 11);
  my_other_dog.summary();
  return 0;
}