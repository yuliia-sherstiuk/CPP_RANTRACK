#include <iostream>
#include <string>

bool estInclus(std::string chaine1, std::string chaine2) {
    return chaine2.find(chaine1) != std::string::npos;
}

int main() {
    std::string a, b;
    std::cout << "Entrez la premiere chaine : ";
    std::getline(std::cin, a);
    std::cout << "Entrez la deuxieme chaine : ";
    std::getline(std::cin, b);

    if (estInclus(a, b)) {
        std::cout << "La premiere chaine est incluse dans la deuxieme." << std::endl;
    } else {
        std::cout << "La premiere chaine n'est pas incluse." << std::endl;
    }

    return 0;
}