#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal {
  public:
    virtual void crier() = 0;
    virtual void manger() = 0;
};

class Chien: public Animal {
  public: 
    void crier() override {
      std::cout << "Wouaf" << std::endl;
    }

    void manger() override {
      std::cout << "Le chien a une alimentation variée" << std::endl;
    }
}; 

class Chat: public Animal {
  public:
    void crier() override {
      std::cout << "Miaou" << std::endl;
    }

    void manger() override {
      std::cout << "Le chat mange du poisson" << std::endl;
    }
};
#endif