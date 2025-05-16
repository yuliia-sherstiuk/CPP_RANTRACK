#include <iostream>

int main() {
    int a = 10;
    int b = 20;

    int* pa = &a;
    int* pb = &b;

    std::cout << "Avant l'échange :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    std::cout << "Après l'échange :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}