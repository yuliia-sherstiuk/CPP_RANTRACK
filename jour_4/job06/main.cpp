#include <iostream>

int main() {
    int entier = 17;
    float flottant = 3.14f;
    double reel = 123.345;
    char caractere[] = "La Plateforme";

    std::cout << "entier: " << entier << ", adresse: " << &entier << std::endl;
    std::cout << "flottant: " << flottant << ", adresse: " << &flottant << std::endl;
    std::cout << "reel: " << reel << ", adresse: " << &reel << std::endl;

    std::cout << "caractere: " << caractere << ", adresse: " << static_cast<void*>(caractere) << std::endl;

    return 0;
}