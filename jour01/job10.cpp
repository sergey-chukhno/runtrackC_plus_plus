#include <iostream>

int main() {
    double prixHT, nombreKilos, tauxTVA, prixTTC;

    // Demande du prix HT
    std::cout << "Entrez le prix HT du kilo de carottes (en euros) : ";
    std::cin >> prixHT;

    // Demande du nombre de kilos
    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> nombreKilos;

    // Demande du taux de TVA en pourcentage
    std::cout << "Entrez le taux de TVA (en %) : ";
    std::cin >> tauxTVA;

    // Calcul du prix TTC
    prixTTC = prixHT * nombreKilos * (1 + tauxTVA / 100);

    // Affichage du prix TTC
    std::cout << "Le prix TTC des carottes est : " << prixTTC << " euros." << std::endl;

    return 0;
}


