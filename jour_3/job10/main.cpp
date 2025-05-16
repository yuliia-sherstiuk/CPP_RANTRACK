#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string string, string2 = "Bonjour";

    std::cout << "Entrez une chaine : ";
    std::getline(std::cin, string);

    if (string < string2) {
        std::cout << string << " vient avant " << string2 << " dans l'ordre lexicographique." << std::endl;
    } else if (string > string2) {
        std::cout << string2 << " vient avant " << string << " dans l'ordre lexicographique." << std::endl;
    } else {
        std::cout << "Les deux chaines sont identiques." << std::endl;
    }

    return 0;
}