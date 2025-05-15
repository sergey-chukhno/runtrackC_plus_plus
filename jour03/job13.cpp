#include <iostream>

void fusionnerTableaux(int T1[], int n1, int T2[], int n2, int T3[]) {
    int i = 0, j = 0, k = 0;

    // Fusion tant qu'on n'a pas parcouru tous les éléments d'un des deux tableaux
    while (i < n1 && j < n2) {
        if (T1[i] < T2[j]) {
            T3[k++] = T1[i++];
        } else {
            T3[k++] = T2[j++];
        }
    }

    // Ajouter le reste de T1 s'il en reste
    while (i < n1) {
        T3[k++] = T1[i++];
    }

    // Ajouter le reste de T2 s'il en reste
    while (j < n2) {
        T3[k++] = T2[j++];
    }
}

int main() {
    // Deux tableaux triés
    int T1[] = {1, 3, 5, 7};
    int T2[] = {2, 4, 6, 8, 10};
    int n1 = sizeof(T1) / sizeof(T1[0]);
    int n2 = sizeof(T2) / sizeof(T2[0]);

    int T3[n1 + n2]; // Tableau pour stocker le résultat de la fusion

    fusionnerTableaux(T1, n1, T2, n2, T3);

    std::cout << "Tableau fusionné : ";
    for (int i = 0; i < n1 + n2; i++) {
        std::cout << T3[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
