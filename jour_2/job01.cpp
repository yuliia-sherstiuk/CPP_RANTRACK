#include <iostream>
#include <string>

class Aquatique {
protected:
    double vitesseNage;

public:
    Aquatique(double v = 1.0) : vitesseNage(v) {}

    virtual void nage() {
        std::cout << "Je nage à " << vitesseNage << " m/s." << std::endl;
    }

    virtual ~Aquatique() = default;
};

class Terrestre {
protected:
    double vitesseMarche;

public:
    Terrestre(double v = 0.5) : vitesseMarche(v) {}

    virtual void marche() {
        std::cout << "Je marche à " << vitesseMarche << " m/s." << std::endl;
    }

    virtual ~Terrestre() = default;
};

class Pingouin : public Aquatique, public Terrestre {
private:
    std::string nom;

public:
    Pingouin(std::string nom, double vitesseNage, double vitesseMarche)
        : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom(std::move(nom)) {}

    void sePresenter() {
        std::cout << "Bonjour, je suis le pingouin " << nom << "." << std::endl;
    }
};

int main() {
    Pingouin p("Tux", 2.0, 1.0);
    p.sePresenter();
    p.nage();
    p.marche();
    return 0;
}