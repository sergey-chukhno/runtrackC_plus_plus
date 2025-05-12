#include <iostream>

int main() {
  double a, b; 

  std:: cout <<"Entrez le premier nombre : ";
  std::cin >> a;
  std:: cout <<"Entrez le deuxieme nombre : ";
  std::cin >> b;

  double produit = a * b;

  std::cout << "Le produit de " << a << " et " << b << " est : " << produit << std::endl;

  return 0;
}