#include <iostream>
#include <cstring> // для strlen

int main() {
    char str[100];

    std::cout << "Entrez une chaîne de caractères : ";
    std::cin.getline(str, 100);

    char* debut = str;
    char* fin = str + std::strlen(str) - 1;

    while (debut < fin) {
        char temp = *debut;
        *debut = *fin;
        *fin = temp;
        debut++;
        fin--;
    }

    std::cout << "Chaine inverse : " << str << std::endl;

    return 0;
}