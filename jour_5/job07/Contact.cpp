#include "Contact.hpp"
#include <iostream>

Contact::Contact(std::string nom, int numero)
    : nom(nom), numero(numero) {}

Contact::Contact(const Contact& autre)
    : nom(autre.nom), numero(autre.numero) {}

void Contact::modifierNumero(int nouveauNumero) {
    numero = nouveauNumero;
}

void Contact::afficher() const {
    std::cout << "Nom: " << nom << ", Numéro: " << numero << std::endl;
}