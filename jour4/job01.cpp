#include <iostream>

int main() {
  
int number = 2019;
int *pNumber = &number;

std::cout << "La valeur de 'number' est : " << *pNumber << std::endl;
}