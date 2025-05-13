#include <iostream>

int main() {
    int n, m;

    std::cout << "Entrez n : ";
    std::cin >> n;

    std::cout << "Entrez m : ";
    std::cin >> m;

    std::cout << "Avant échange: n = " << n << ", m = " << m << std::endl;

    // Échange
    int temp = n;
    n = m;
    m = temp;

    std::cout << "Après échange: n = " << n << ", m = " << m << std::endl;

    return 0;
}