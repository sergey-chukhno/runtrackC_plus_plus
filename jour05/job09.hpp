#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal {
  private:
    static int totalAnimaux; 

  public:
    Animal() {
        totalAnimaux++;
    }

    virtual ~Animal() {}

    // Pure virtual functions
    virtual void crier() = 0;
    virtual void manger() = 0;

    // Static method to get the total number of animals
    static int getTotalAnimaux() {
        return totalAnimaux;
    }
};

// Initialize the static member
int Animal::totalAnimaux = 0;

class Chien : public Animal {
  public:
    void crier() override {
        std::cout << "Wouaf" << std::endl;
    }

    void manger() override {
        std::cout << "Le chien a une alimentation variée" << std::endl;
    }
};

class Chat : public Animal {
  public:
    void crier() override {
        std::cout << "Miaou" << std::endl;
    }

    void manger() override {
        std::cout << "Le chat mange de la viande et des croquettes" << std::endl;
    }
};

#endif