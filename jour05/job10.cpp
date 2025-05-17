#include "job10.hpp"

int main() {
    Chien chien;
    Chat chat;

    // Test Chien methods
    chien.crier();
    chien.manger();

    // Test Chat methods
    chat.crier();
    chat.manger(); // Default behavior
    chat.manger("des croquettes"); // Specific behavior
  
    return 0;
}