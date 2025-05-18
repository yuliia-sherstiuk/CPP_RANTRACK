
#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
class Joueur {
private:
    int x;
    int y;

public:
    void initialiser(int x_val, int y_val);
    void afficher();
    void deplacer(int dx, int dy);
};

#endif //JOUEUR_HPP
