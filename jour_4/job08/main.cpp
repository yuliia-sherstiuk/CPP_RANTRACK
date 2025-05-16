#include <iostream>

int main() {
    int entier = 2019;
    const char* str1 = "La Plateforme";
    double reel = 3.14;
    const char* str2 = "Étudiants";

    void* tab[4];
    tab[0] = &entier;
    tab[1] = (void*)str1;
    tab[2] = &reel;
    tab[3] = (void*)str2;

    std::cout << "entier: " << *(int*)tab[0] << ", adresse: " << tab[0] << std::endl;
    std::cout << "str1: " << (char*)tab[1] << ", adresse: " << tab[1] << std::endl;
    std::cout << "reel: " << *(double*)tab[2] << ", adresse: " << tab[2] << std::endl;
    std::cout << "str2: " << (char*)tab[3] << ", adresse: " << tab[3] << std::endl;

    return 0;
}