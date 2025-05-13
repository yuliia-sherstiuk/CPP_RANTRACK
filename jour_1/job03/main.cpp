#include <iostream>

int main() {
    int N;
    std::cout << "combien de fois Hello World? ";
    std::cin >> N;

    while (N != 0) {
        std::cout << "Hello World" << std::endl;
        N--;
    }

    return 0;
}