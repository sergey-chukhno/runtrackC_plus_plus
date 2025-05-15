#include <iostream>

int main() {
  int T[10];
  int compteur = 0;

  std::cout << "Veuillez entrer 10 entiers :" << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cin >> T[i]; 

    if (T[i]>=5) compteur++;
  }

  std::cout << "Il y a " << compteur << " entiers supérieurs ou égaux  à 5." << std::endl;
  return 0;
}