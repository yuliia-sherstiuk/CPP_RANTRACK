
#include <iostream>
#include "Joueur.hpp"

int main() {
    // Création  avec le constructeur
    Joueur joueur1;
    joueur1.afficherPosition();

    Joueur joueur2(10, 20);
    joueur2.afficherPosition();


    Joueur joueur3(5, 7, "Lain");
    joueur3.afficherPosition();

    return 0;
}