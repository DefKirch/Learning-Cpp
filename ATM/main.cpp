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
        show_balance();
        break;
      case 2:
        deposit_money();
        break;
    }
  }
  return 0;
}