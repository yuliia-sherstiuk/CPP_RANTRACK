#include <iostream>

int main() {
    int tab[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        std::cout << "tab[" << i << "] = " << tab[i] << ", adresse = " << &tab[i] << std::endl;
    }

    return 0;
}