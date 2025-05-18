#include "Personne.hpp"

int main() {
    Personne guerrier("Lain", 100, 40.5f);
    Personne mage("Rycki", 70, 20.0f);

    guerrier.afficherInfos();
    mage.afficherInfos();

    guerrier.changerVie(120);
    mage.changerDefense(25.0f);

    guerrier.afficherInfos();
    mage.afficherInfos();

    return 0;
}