
#include "Joueur.hpp"

void Joueur::initialiser(int x_val, int y_val) {
    x = x_val;
    y = y_val;
}
void Joueur::afficher() {
    std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
}

void Joueur::deplacer(int dx, int dy) {
    x += dx;
    y += dy;
}
