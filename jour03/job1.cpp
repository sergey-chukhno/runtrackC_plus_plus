#include <iostream>
#include <string>

int main() {
    std::string phrase = "vive la plateforme !";

    for (char& c : phrase) {
        // Check if the character is between 'a' and 'z'
        if (c >= 'a' && c <= 'z') {
            c = c - ('a' - 'A'); // Convert to uppercase using ASCII math
        }
    }

    std::cout << phrase << std::endl;

    return 0;
}
