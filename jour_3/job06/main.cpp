#include <iostream>

int main() {
    const int taille = 10;
    int T[taille];
    int compteur = 0;

    std::cout << "Entrez 10 entiers :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cin >> T[i];
        if (T[i] >= 5) {
            compteur++;
        }
    }

    std::cout << "Nombre d'entiers superieurs ou egaux a 5 : " << compteur << std::endl;

    return 0;
}