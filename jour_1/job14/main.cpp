#include <iostream>

int main() {
    int n;
    std::cout << "Entrez un nombre : ";
    std::cin >> n;

    int inverse = 0;

    while (n != 0) {
        inverse = inverse * 10 + (n % 10);
        n /= 10;
    }

    std::cout << "Nombre inversé : " << inverse << std::endl;

    return 0;
}