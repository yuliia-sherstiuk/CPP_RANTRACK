#include "Etudiant.hpp"

Etudiant::Etudiant(std::string nom, std::string prenom, int age, int matricule)
    : nom(nom), prenom(prenom), age(age), matricule(matricule) {}

void Etudiant::afficher() const {
    std::cout << "Nom: " << nom << ", Prénom: " << prenom
              << ", Âge: " << age << ", Matricule: " << matricule << std::endl;
}