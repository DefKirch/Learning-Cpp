#include <iostream>
#include <unordered_map>
#include <map>


int main() {
  // Keys must be unique, will not save any key:value pairs with the same key
  std::unordered_map<std::string, int> name_age({{"Thijmen", 23}, {"Dwight", 56}, {"James", 42}});

  // Insert a new key:value pair
  name_age.insert({"Anakin", 37});

  // Acces an element like this
  name_age["Anakin"]; // Returns 37

  // Erase elements like this
  name_age.erase("James"); // Returns 1 if erased successfully otherwise returns 0

  // Returns the value of the following keys value
  std::cout << name_age.at("Dwight") << "\n";
  
  
  // Ordered map orders the key:value pairs, unordered maps are faster than ordered
  std::map<int, char> ordered({{2, 'b'}, {1, 'a'}, {3, 'c'}});

  for(auto it: ordered){
    std::cout << it.first << " " << it.second << "\n";
  }

  return 0;
}