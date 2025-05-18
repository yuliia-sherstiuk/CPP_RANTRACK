
#include "Joueur.hpp"
// Реализация конструктора
Joueur::Joueur(int posX, int posY) {
    x = posX;
    y = posY;
}

void Joueur::deplacer(int dx, int dy) {
    x += dx;
    y += dy;
}


void Joueur::afficherPosition() {
    std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
}