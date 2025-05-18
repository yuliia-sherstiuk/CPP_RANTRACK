
#ifndef JOUEUR_HPP
#define JOUEUR_HPP
#include <iostream>
#include <string>

class Joueur {
private:
    int x;
    int y;
    std::string nom;     // Nom

public:
    // Constructer
    Joueur();
    Joueur(int X, int Y);
    Joueur(int x, int y, std::string nom);

    void setPosition(int x, int y);
    void afficherPosition() const;
    void deplacer(int dx, int dy);
};
#endif