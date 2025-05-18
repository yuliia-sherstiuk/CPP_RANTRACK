#include "Contact.hpp"
#include <iostream>
#include <string>

int main() {
    Contact original1("Lain", 123456789);
    Contact original2("Rycki", 987654321);

    Contact copie1 = original1;
    Contact copie2 = original2;

    copie1.modifierNumero(111111111);
    copie2.modifierNumero(222222222);

    std::cout << "Originaux :" << std::endl;
    original1.afficher();
    original2.afficher();

    std::cout << "Copies modifiées :" << std::endl;
    copie1.afficher();
    copie2.afficher();

    return 0;
}