#include <iostream>
#include <stack>
#include <queue>

int main() {

  // Initialize a new stack, can only contain one data type
  std::stack<int> plates;

  // Adds a new element to the stack
  plates.push(21);
  
  // Gets the top element in the stack
  std::cout << plates.top() << "\n";

  // Removes the top element from the stack, does not return anything
  plates.pop();

  // Returns the size of the stack
  std::cout << plates.size() << "\n";

  // Creates a new queue, only one data type again
  std::queue<std::string> line;

  // Adds new element to the queue, FIFO
  line.push("Thijmen");
  line.push("Jim");
  line.push("Dwight");

  // Gets the size of the queue
  std::cout << line.size() << "\n";
  std::cout << line.front() << " " << line.back() << "\n";

  // Returns 1 if line is empty, if not returns 0
  std::cout << line.empty() << "\n";
  return 0;
}