#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Entrez trois entiers : ";
    std::cin >> a >> b >> c;

    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;

    std::cout << "Le plus grand nombre est : " << max << std::endl;

    return 0;
}
