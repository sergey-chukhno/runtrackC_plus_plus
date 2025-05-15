#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string phrase = "vive la plateforme !";
    std::unordered_set<char> voyelles = {'a','e','i','o','u','y'};
    std::string resultat;

    for (const char& c : phrase) {
        if (voyelles.find(c) == voyelles.end()) {
            resultat += c;
        }
    }

    std::cout << resultat << std::endl;
    return 0;
}
