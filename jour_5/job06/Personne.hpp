#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>

class Personne {
private:
    std::string nom;
    int vie;
    float defense;

public:
    Personne(std::string nom, int vie, float defense);
    void afficherInfos() const;
    void changerVie(int nouvelleVie);
    void changerDefense(float nouvelleDefense);
};

#endif