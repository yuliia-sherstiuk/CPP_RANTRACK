
#include <iostream>
#include "Joueur.hpp"



int main() {
    Joueur joueur1;
    Joueur joueur2(5, 10);
    Joueur joueur3(7, 9, "Lain");

    joueur1.afficherPosition();
    joueur2.afficherPosition();
    joueur3.afficherPosition();

    joueur3.deplacer(1, -1);
    joueur3.afficherPosition();

    return 0;
}