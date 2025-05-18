//
// Created by djana on 17/05/2025.
#include <iostream>
#include "Joueur.hpp"

int main() {
    Joueur joueur1;

    joueur1.initialiser(5, 10);
    joueur1.afficher();

    joueur1.deplacer(2, -3);
    joueur1.afficher();

    return 0;
}