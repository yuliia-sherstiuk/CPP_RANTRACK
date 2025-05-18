

#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP
#include <iostream>
#include <string>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    int age;
    int matricule;

public:

    Etudiant(std::string nom, std::string prenom, int age, int matricule);

    void afficher() const;
};


#endif //ETUDIANT_HPP
