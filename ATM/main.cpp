#include <iostream>

void showOptions() {
  std::cout << "Option 1: Check you balance\n";
  std::cout << "Option 2: Check you balance\n";
  std::cout << "Option 1: Check you balance\n";
  std::cout << "Option 1: Check you balance\n";
};

int main() {
  bool running = true;
  std::string option;


  std::cout << "****************\n";
  std::cout << "================\n";
  std::cout << "     ATM        \n";
  std::cout << "================\n";
  std::cout << "****************\n";


  do {
    showOptions();
    std::cout << "\n You choose option: ";  
    std::cin >> option;
    
  } while (running);
  return 0;
}