#include <iostream>

int main() {
    std::string saisie;
    std::cout << "Entrez une chaîne : ";
    std::getline(std::cin, saisie);

    char tab[100]; // Taille maximale
    int i = 0;
    while (i < saisie.length() && i < 99) {
        tab[i] = saisie[i];
        i++;
    }
    tab[i] = '\0'; // Fin de chaîne

    std::cout << "Contenu du tableau : " << tab << std::endl;
    return 0;
}