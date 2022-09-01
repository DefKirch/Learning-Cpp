#include <iostream>
#include <vector>

int main() {
  // Vectors are dynamic in size and can contain one data type
  std::vector<char> initials = {'T', 'J'};

  // Pushed a new element to the back of the vector
  initials.push_back('R');

  std::cout << initials.front() << "\n";
  std::cout << initials[1] << "\n";
  std::cout << initials.back() << "\n";

  std::cout << initials.size() << "\n";
  
  // Pops one element from the back of the vector, does not return its value
  initials.pop_back();
  std::cout << initials.size() << "\n";

  std::cout << initials.back() << "\n";

  initials.push_back('B');
  initials.push_back('C');
  initials.push_back('D');

  for (char letter: initials) {
    std::cout << "\n" << letter << "\n";
  }
  return 0;
}