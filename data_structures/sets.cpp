#include <iostream>
#include <unordered_set>
#include <set>

int main() {
  // Initializes an unordered set, can only contain unique values and one data type
  std::unordered_set<int> unordered({1, 5, 2, 9, 6});

  // Adds a new element to the set
  unordered.insert(21);

  // Removes the given element from the set
  unordered.erase(1);

  // You can check whether a set contains a value or not with count
  std::cout << unordered.count(21) << "\n\n"; // Returns 1


  // Orders the elements, slower operations like insert and erase than an unordered set. Only use if you want the set sorted
  std::set<int> ordered({5, 2, 19, 4, 47});

  for(int num: ordered) {
    std::cout << num << "\n";
  }

  return 0;
}