#include <iostream>
#include <string>


class Person {
  public: 
    std::string nom;
    std::string prenom;
    int vie;
    float defense;
    
    Person(std::string nom, std::string prenom, int vie, float defense) 
        : nom(nom), prenom(prenom), vie(vie), defense(defense) {};
    
    void getName() {
      std::cout << "Nom: " << nom << std::endl;
    }

    void getPrenom() {
      std::cout << "Prenom: " << prenom << std::endl;
    }

    void getVie() {
      std::cout << "Vie: " << vie << std::endl;
    }

    void getDefense() {
      std::cout << "Defense: " << defense << std::endl;
    }
    void setName(std::string newNom) {
      nom = newNom;
    }
    void setPrenom(std::string newPrenom) {
      prenom = newPrenom;
    }
    void setVie(int newVie) {
      vie = newVie;
    }
    void setDefense(float newDefense) {
      defense = newDefense;
    }
};