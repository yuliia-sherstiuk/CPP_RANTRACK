#include <iostream>

int main() {
    int n;
    std::cout << "Entrez un entier : ";
    std::cin >> n;

    if (n % 2 == 0)
        std::cout << "Le nombre est pair." << std::endl;
    else
        std::cout << "Le nombre est impair." << std::endl;

    return 0;
}