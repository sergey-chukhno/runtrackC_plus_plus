#include <iostream> 


int main() {

  int entier = 17;
  float flottant = 3.14;
  double reel = 123.345;
  char caractere[] = "La Plateforme"; 

  std::cout << "Adresse memoire de entier : " << &entier << std::endl;
  std::cout << "Adresse memoire de flottant : " << &flottant << std::endl;
  std::cout << "Adresse memoire de reel : " << &reel << std::endl;
  std::cout << "Adresse memoire de caractere : " << &caractere << std::endl;

  
  return 0;
}
