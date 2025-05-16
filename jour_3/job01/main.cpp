#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string texte = "vive la plateforme !";
    std::transform(texte.begin(), texte.end(), texte.begin(), ::toupper);
    std::cout << texte << std::endl;
    return 0;
}