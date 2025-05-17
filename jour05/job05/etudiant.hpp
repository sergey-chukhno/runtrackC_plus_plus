#include <iostream> 
#include <string> 

class Etudiant
{
    private:
        std::string nom;
        std::string prenom;
        int age;
        int matricule;
        
    public:
        Etudiant(std::string nom, std::string prenom, int age, int matricule): nom(nom), prenom(prenom), age(age), matricule(matricule) {};
};