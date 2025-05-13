#include <iostream>

int main() {
    int x;
    int somme = 0;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Entrez un entier : ";
        std::cin >> x;
        somme += x;
    }

    double moyenne = somme / 5.0;

    std::cout << "Moyenne : " << moyenne << std::endl;

    return 0;
}