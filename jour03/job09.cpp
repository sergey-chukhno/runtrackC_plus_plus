#include <iostream>
#include <string> 

bool estIncluse(std::string s1, std::string s2) {
  return s1.find(s2) != std::string::npos;
}

int main() {
  std::string s1, s2;
  std::cout << "Entrez la première chaîne de caractères : ";
  std::getline(std::cin, s1);
  std::cout << "Entrez la deuxième chaîne de caractères : ";
  std::getline(std::cin, s2);

  if (estIncluse(s1, s2)) {
    std::cout << "La chaîne \"" << s2 << "\" est incluse dans \"" << s1 << "\"." << std::endl;
  } else {
    std::cout << "La chaîne \"" << s2 << "\" n'est pas incluse dans \"" << s1 << "\"." << std::endl;
  }

  return 0;
}
