#include <iostream>
int main() {
    int number = 2019;
    int* pointer = &number;
    std::cout << "la valeur de number est: "<< *pointer << std::endl;
    return 0;
}
