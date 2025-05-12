#include <iostream>

int main() {
  int N; 
  std::cout << "Entrez un nombre N (0 pour quitter) : ";
  std::cin >> N;

  while (N > 0) {
    for (int i = 0; i < N; i++)
     {std::cout << "Hello World!" << std::endl;
  }
  std::cout << "\nEntrez un nouveau nombre N (0 pour quitter) : ";
  std::cin >> N;
}
std::cout << "Programme terminé." << std::endl;
    return 0;
}