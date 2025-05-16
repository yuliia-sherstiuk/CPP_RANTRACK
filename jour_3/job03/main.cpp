#include <iostream>
#include <string>

int comparer(std::string a, std::string b) {
    if (a == b) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    std::string texte1 = "vive la plateforme !";
    std::string texte2 = "vive la plateforme !";

    int resultat = comparer(texte1, texte2);
    std::cout << resultat << std::endl;
    return 0;
}