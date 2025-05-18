//
// Created by djana on 17/05/2025.
#include <iostream>
#include "Joueur.hpp"

int main() {

    Joueur joueur(5, 10);
    joueur.afficherPosition();

    joueur.deplacer(2, -3);
    joueur.afficherPosition();

    return 0;
}