#include <iostream>
#include "atm_functions.hpp"


void show_options() {
  std::cout << "Option 1: Check your balance\n";
  std::cout << "Option 2: Deposit money\n";
  std::cout << "Option 3: Withdraw money\n";
  std::cout << "Option 4: Quit\n\n";
};

void show_introduction() {
  std::cout << "********************************************\n";
  std::cout << "*==========================================*\n";
  std::cout << "*                ATM                       *\n";
  std::cout << "*==========================================*\n";
  std::cout << "********************************************\n\n";
}

 int ask_option() {
  int option;
  std::cout << "Option: ";  
  std::cin >> option;
  return option;
}

void show_balance(double bal) {
  std::cout << "Your balance is: $" << bal << "\n\n";
}

double deposit_money() {
  double amount;
  std::cout << "Enter amount to be deposited: ";
  std::cin >> amount;
  std::cout << "\n";
  return amount;
}

double withdraw_money() {
  double amount;
  std::cout << "Enter amount to be withdrawn: ";
  std::cin >> amount;
  std::cout << "\n";
  return amount;
}