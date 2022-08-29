/*
 Rock Paper Scissors
 */
#include <iostream>
#include <stdlib.h> 

int main() {
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
 
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
 
  std::cout << "shoot! \n";

  std::cin >> user;

  if (user == 1) {
    std::cout << "You picked Rock\n";
  } else if (user == 2) {
    std::cout << "You picked Paper\n";
  } else if (user == 3) {
    std::cout << "You picked Scissors\n";
  } else {
    std::cout << "You didn't pick anything\n";
  }
    
  if (computer == 1) {
    std::cout << "Computer picked Rock\n";
  } else if (computer == 2) {
    std::cout << "Computer picked Paper\n";
  } else if (computer == 3) {
    std::cout << "Computer picked Scissors\n";
  }

  if (user == computer) {
        std::cout << "it's a tie!\n";
  } else if (user == 1) {
    if (computer == 2) {
      std::cout << "you lost!\n";
    }
    if (computer == 3) {
      std::cout << "you won!\n";
    }
  }

  else if (user == 2) {
    if (computer == 1) {
      std::cout << "you won!\n";
    } if (computer == 3) {
      std::cout << "you lost!\n";
    }
  }
  
  else if (user == 3) {
    if (computer == 1) {
      std::cout << "you won!\n";
    } if (computer == 2) {
      std::cout << "you lost!\n";
    }
  return 0;
  }
}