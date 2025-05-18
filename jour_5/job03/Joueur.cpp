#include "Joueur.hpp"
#include <iostream>

// Constructeur par défaut
Joueur::Joueur() {
    x = 0;
    y = 0;
    nom = " ";
}
Joueur::Joueur(int posX, int posY) {
    x = posX;
    y = posY;
    nom = " ";
}
Joueur::Joueur(int posX, int posY, std::string joueurNom) {
    x = posX;
    y = posY;
    nom = joueurNom;
}
// Déplace
void Joueur::deplacer(int dx, int dy) {
    x += dx;
    y += dy;
}
// Afficher la position
void Joueur::afficherPosition() {
    std::cout << "Nom : " << nom << ", Position : (" << x << ", " << y << ")" << std::endl;
}
