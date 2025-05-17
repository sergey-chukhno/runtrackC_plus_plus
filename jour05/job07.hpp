#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream> 
#include <string> 

class Contact {
  private:
    std::string nom;
    std::string telephone; 
  
  public:
    Contact(std::string nom, std::string telephone) : nom(nom), telephone(telephone) {};
    Contact(const Contact &other) : nom(other.nom), telephone(other.telephone) {};

    std::string getNom() const {
      return nom;
    }
    std::string getTelephone() const {
      return telephone;
    }
    void setNom(std::string nom) {
      this->nom = nom;
    }
    void setTelephone(std::string telephone) {
      this->telephone = telephone;
    }
    void display() const {
      std::cout << "Nom: " << nom << ", Telephone: " << telephone << std::endl;
    }

};
#endif