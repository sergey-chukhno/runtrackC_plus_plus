#include <iostream>

int main() {
  int array[] = {1, 2, 3, 4, 5}; 

  for (int& value: array) {
    std::cout << value << " ";
  }
  std::cout << std::endl;
  return 0; 
}