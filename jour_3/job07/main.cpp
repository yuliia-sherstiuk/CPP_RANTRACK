#include <iostream>

int main() {
    const int taille = 10;
    int T[taille];
    int max = -2147483648; // plus petit int possible
    int indice_max = 0;

    std::cout << "Entrez 10 entiers :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cin >> T[i];
        if (T[i] > max) {
            max = T[i];
            indice_max = i;
        }
    }

    std::cout << "L'indice du plus grand element est : " << indice_max << std::endl;
    return 0;
}