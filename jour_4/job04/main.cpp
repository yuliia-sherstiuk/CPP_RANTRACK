#include <iostream>

int main() {
    int a = 1, b = 2, c = 3;

    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    *pa = 15;
    *pb = 150;
    *pc = 1500;
    std::cout << "Nouvelles valeurs :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    return 0;
}