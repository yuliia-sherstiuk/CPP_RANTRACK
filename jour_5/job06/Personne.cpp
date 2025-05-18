#include "Personne.hpp"
#include <iostream>

Personne::Personne(std::string nom, int vie, float defense)
    : nom(nom), vie(vie), defense(defense) {}

void Personne::afficherInfos() const {
    std::cout << "Nom: " << nom << ", Vie: " << vie << ", Défense: " << defense << std::endl;
}

void Personne::changerVie(int nouvelleVie) {
    vie = nouvelleVie;
}

void Personne::changerDefense(float nouvelleDefense) {
    defense = nouvelleDefense;
}