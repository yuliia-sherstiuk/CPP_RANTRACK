
#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
#include <string>
class Joueur {
private:
    int x;
    int y;

public:
    // Конструктор
    Joueur(int posX, int posY);

    void deplacer(int dx, int dy);
    void afficherPosition();
};

#endif
