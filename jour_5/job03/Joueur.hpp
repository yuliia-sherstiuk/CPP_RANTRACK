
#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <string>

class Joueur {
private:
    int x;
    int y;
    std::string nom;     // Nom

public:
    // Constructer
    Joueur();

    // Constructer avec x et y
    Joueur(int posX, int posY);

    // Constructer avec x, y et nom
    Joueur(int posX, int posY, std::string joueurNom);

    void deplacer(int dx, int dy);         // Déplacer le joueur
    void afficherPosition();               // Afficher position et nom
};

#endif