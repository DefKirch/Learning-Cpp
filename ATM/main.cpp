#include <iostream>
#include "atm_functions.hpp"

int main() {
  bool running = true;
  int option;
  double balance = 0;

  show_introduction();

  while (running) {
    show_options();
    option = ask_option();
    switch(option) {
      case 1: 
        show_balance(balance);
        break;
      case 2:
        balance += deposit_money();
        break;
      case 3:
        balance -= withdraw_money();
        break;
      case 4:
        running = false;
        std::cout << "Closing the ATM";
        break;
      default:
        break;
    }
  }
  return 0;
}