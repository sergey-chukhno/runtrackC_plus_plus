#include <iostream>
#include <string>

struct Staff {
  std::string prenom;
  std::string nom;

  Staff(const std::string p, const std::string n): prenom(p), nom(n) {}
};
struct Etudiant {
  std::string prenom;
  std::string nom;

  Etudiant(const std::string p, const std::string n): prenom(p), nom(n) {}
};

int main()
{
  Staff s1("Alicia", "Cordial");
  Staff s2("Pieere", "Malardier");
  std::cout << "Les prénoms des membres du staff sont : " << s1.prenom << " et " << s2.prenom << std::endl;

  std::string preonomEtudiant, nomEtudiant; 
  std::cout << "Entrez le prénom de l'étudiant : ";
  std::cin >> preonomEtudiant;
  std::cout << "Entrez le nom de l'étudiant : ";
  std::cin >> nomEtudiant;
  Etudiant e1(preonomEtudiant, nomEtudiant);
  std::cout << "Le prénom de l'étudiant est : " << e1.prenom << std::endl;
  std::cout << "Le nom de l'étudiant est : " << e1.nom << std::endl;
  
return 0;
}