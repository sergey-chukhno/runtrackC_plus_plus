#include <iostream>
#include <cstring>

int main() {
  char string[100];
  char string2[] = "Bonjour";

  std::cout << "Entrez une chaîne de caractères : ";
  std::cin.getline(string, 100); 

  if (strcmp(string, string2) < 0) {
    std::cout << "Ordre lexicographique : " << string << " < " << string2 << std::endl;
  } else {
    std::cout << "Ordre lexicographique : " << string2 << " < " << string << std::endl;
  }
  return 0; 
}