#include <iostream>
#include "profile.hpp"

int main() {
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  sam.add_hobby("Coding");
  sam.add_hobby("Reading books");
  sam.add_hobby("Cooking");

  std::cout << sam.view_profile();
};