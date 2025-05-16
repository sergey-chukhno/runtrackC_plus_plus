#include <iostream>
#include <string>

int main() {
  std::string fruit[5] = {"Framboise", "Fraise", "Cerise", "Pêche", "Abricot"}; 
  std::cout << "Liste de fruits disponibles : " << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << fruit[i] << std::endl;
  }
  
  int favouriteCount = 0;
  std::cout << "Combien de fruits prendrez-vous ? " << std::endl;
  std::cin >> favouriteCount;

  std::string *favourites = new std::string[favouriteCount];

  std::cout << "Entrer vos fruits préférés (un par un) : " << std::endl;
  if (favouriteCount > 5) {
    std::cout << "Vous ne pouvez pas choisir plus de 5 fruits." << std::endl;
    delete[] favourites; 
    return 1; 
  }
  if (favouriteCount < 1) {
    std::cout << "Vous devez choisir au moins un fruit." << std::endl;
    delete[] favourites; 
    return 1; 
  }
  for (int i = 0; i < favouriteCount; i++) {
    std::cout << "Votre fruit préféré n°" << i + 1 << " : ";
    std::cin >> favourites[i];
    std::cout << "Vous avez choisi " << favourites[i] << std::endl;
  }
  std::cout << "Vos fruits préférés sont : " << std::endl;
  for (int i = 0; i < favouriteCount; i++) {
      std::cout << favourites[i] << std::endl;
    }
  delete[] favourites;

    return 0; 
  }
  