#include <iostream>
#include "atm_functions.hpp"


void show_options() {
  std::cout << "Option 1: Check your balance\n";
  std::cout << "Option 2: Deposit money\n";
  std::cout << "Option 3: Withdray money\n";
  std::cout << "Option 4: Quit\n";
};

void show_introduction() {
  std::cout << "****************\n";
  std::cout << "================\n";
  std::cout << "     ATM        \n";
  std::cout << "================\n";
  std::cout << "****************\n";
}

 int ask_option() {\
  int option;
  std::cout << "\n You choose option: ";  
  std::cin >> option;
  return option;
}

void show_balance(double bal) {
  std::cout << "Your balance is: " << bal << "\n";
}