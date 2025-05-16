#include <iostream>
#include <string>
#include <regex>

int main() {
    std::string heure;
    std::cout << "Veuillez entrer une heure au format XXhXX : ";
    std::cin >> heure;

    std::regex format_heure("^\\d{2}h\\d{2}$");

    if (std::regex_match(heure, format_heure)) {
        std::cout << "Format correct." << std::endl;
    } else {
        std::cout << "Format incorrect." << std::endl;
    }

    return 0;
}