#include <iostream>
#include <string>

int main() {
    std::string texte = "vive la plateforme !";
    std::string resultat = "";

    for (char c : texte) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            resultat += c;
        }
    }

    std::cout << resultat << std::endl;
    return 0;
}