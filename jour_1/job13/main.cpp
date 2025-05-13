#include <iostream>

int main() {
    int N;
    std::cout << "Entrez un entier N : ";
    std::cin >> N;

    int somme = 0;

    if (N < 5) {
        std::cout << "N est inférieur à 5, aucun cube à additionner." << std::endl;
    } else {
        std::cout << "Calcul des cubes de 5 à " << N << " :" << std::endl;

        for (int i = 5; i <= N; ++i) {
            int cube = i * i * i;
            std::cout << i << "^3 = " << cube << std::endl;
            somme += cube;
        }

        std::cout << "--------------------------" << std::endl;
        std::cout << "Somme des cubes de 5^3 a " << N << "^3 = " << somme << std::endl;
    }

    return 0;
}