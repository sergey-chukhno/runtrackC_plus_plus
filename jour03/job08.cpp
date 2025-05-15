#include <iostream> 

int main() {
  int taille = 10;
  char tab[taille];

  std::cout << "Entrez 10 caracteres: ";
  for (int i = 0; i < taille; ++i) {
    std::cin >> tab[i];
}

  std::cout << "Le contenu du tableau tab[] est: \n"; 
  for (int i = 0; i < taille; i++)
  {
    std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
  }

  std::cout << "tab[" << strlen(tab) << "] = '\\0'" << std::endl;
  return 0;
}