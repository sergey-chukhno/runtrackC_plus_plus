#include <iostream> 

void inverser_chaine(char* chaine) {
  char *debut = chaine;
  char *fin = chaine; 

  while (*fin != '\0') {
    fin++;
  }
  fin--;

  while (debut < fin) {
    char temp = *debut;
    *debut = *fin;
    *fin = temp;
    debut++;
    fin--;
  }
}

int main() {
  char chaine[] = "Plateforme";
  inverser_chaine(chaine); 
  std::cout << "La chaîne inversée est : " << chaine << std::endl;

  return 0;
}