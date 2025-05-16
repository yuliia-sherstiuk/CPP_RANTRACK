#include <iostream>

int main() {
    int n;

    while (true) {
        std::cout << "Entrez la taille du tableau (entier positif): ";
        std::cin >> n;

        if (std::cin.fail() || n <= 0) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Entrée invalide. Veuillez entrer un entier positif." << std::endl;
        } else {
            break;
        }
    }

    int* tab = new int[n];

    for (int i = 0; i < n; i++) {
        while (true) {
            std::cout << "Entrez l'element " << i << ": ";
            std::cin >> tab[i];
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                std::cout << "Entrée invalide. Veuillez entrer un entier." << std::endl;
            } else {
                break;
            }
        }
    }

    std::cout << "Contenu du tableau: ";
    for (int i = 0; i < n; i++) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    delete[] tab;

    return 0;
}