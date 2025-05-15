#include <iostream>

int main() {
  int T[10];
  int maxIndex = 0; 

  std::cout << "Enter 10 integers: ";

  for (int i = 0; i < 10; i++) {
    std::cin >> T[i];
    if (T[i] > T[maxIndex]) {
      maxIndex = i;
    }
  }
  std::cout << "L'indice du plus grand entier est: " << maxIndex << std::endl;

  return 0; 
}