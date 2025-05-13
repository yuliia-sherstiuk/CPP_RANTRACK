#include <iostream>

int main() {
    int annee;
    std::cout << "Entrez une année : ";
    std::cin >> annee;

    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))
        std::cout << "L'année est bissextile." << std::endl;
    else
        std::cout << "L'année n'est pas bissextile." << std::endl;

    return 0;
}
