#include <iostream>

int main() {
    double prixHT, kilos, tva;

    std::cout << "Prix HT par kilo de carottes : ""euro  ";
    std::cin >> prixHT;

    std::cout << "Nombre de kilos : ""kg  ";
    std::cin >> kilos;

    std::cout << "Taux de TVA (%) : ""%  ";
    std::cin >> tva;

    double prixTTC = prixHT * kilos * (1 + tva / 100);

    std::cout << "Prix TTC : " << prixTTC << " euros" << std::endl;

    return 0;
}