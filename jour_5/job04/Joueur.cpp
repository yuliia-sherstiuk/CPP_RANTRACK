#include "Joueur.hpp"
#include <iostream>

// Constructeur
Joueur::Joueur() : x(0), y(0), nom(" ") {}
Joueur::Joueur(int x, int y) : x(x), y(y), nom(" ") {}
Joueur::Joueur(int x, int y, std::string nom) : x(x), y(y), nom(nom) {}

void Joueur::setPosition(int x, int y) {
    this->x = x;
    this->y = y;
}
void Joueur::afficherPosition() const {
    std::cout << "Nom: " << nom << ", Position (" << x << ", " << y << ")" << std::endl;
}
void Joueur::deplacer(int dx, int dy) {
    this->x += dx;
    this->y += dy;
}
