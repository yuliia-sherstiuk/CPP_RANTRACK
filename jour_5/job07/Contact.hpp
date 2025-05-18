#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
    std::string nom;
    int numero;

public:
    Contact(std::string nom, int numero);
    Contact(const Contact& autre); // constructeur de copie

    void modifierNumero(int nouveauNumero);
    void afficher() const;
};

#endif