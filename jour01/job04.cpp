#include <iostream>

int main() {
  double a, b; 

  std:: cout <<"Entrez le premier nombre : ";
  std::cin >> a;
  std:: cout <<"Entrez le deuxieme nombre : ";
  std::cin >> b;

  double somme = a + b;

  std::cout << "La somme de " << a << " et " << b << " est : " << somme << std::endl;

  return 0;
}