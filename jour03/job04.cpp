#include <iostream> 

int main() {
  const char phrase[] = "Vive la plateforme !";
  int taille = 0; 

  while (phrase[taille] != '\0') taille++;
  std::cout << "La taille de la phrase " << phrase << " est " << taille << std::endl;
}