#include <iostream>

int main() {
  // Standard array, fixed size and one data type
  std::string shopping_list[] = {"Bread", "Milk", "Bananas", "Ham", "Pizza"};
  
  for (std::string item: shopping_list) {
    std::cout << "- " << item << "\n";
  }
  std::cout << std::endl;

  // 2D arrays and how to loop over them
  int two_d_array[4][4] = {
    {1, 4, 7, 8}, 
    {2, 3, 5, 9}, 
    {0, 10, 13, 16},
    {11, 12, 14, 15}};
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      std::cout << two_d_array[i][j] << " ";
    }
    std::cout << std::endl;
  }
  
  return 0;
}