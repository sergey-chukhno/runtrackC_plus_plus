#include <iostream>

int main() {
  int a = 0;
  int b = 1;
  int c = 2;

  int *ptrA = &a;
  int *ptrB = &b;
  int *ptrC = &c; 

  // Déréférencement
  std::cout << "Valeurs originales :" << std::endl;
  std::cout << "*ptrA = " << *ptrA << std::endl;
  std::cout << "*ptrB = " << *ptrB << std::endl;
  std::cout << "*ptrC = " << *ptrC << std::endl;

  // Modification des valeurs via les pointeurs
  *ptrA = 100;
  *ptrB = 200;
  *ptrC = 300;

  // Nouvelles valeurs des variables
  std::cout << "\nValeurs après modification via les pointeurs :" << std::endl;
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "c = " << c << std::endl;

  return 0;
}