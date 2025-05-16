#include <iostream>

int X = 12; 

void f(int& X) {
  X = 0; 
}

int main() {
  f(X); 
  std::cout << X << std::endl; // Output: 0
  return 0;
}