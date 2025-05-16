#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point p;
    Point* ptr = &p;

    ptr->x = 5;
    ptr->y = 8;

    std::cout << "Coordonnées du point :" << std::endl;
    std::cout << "x = " << ptr->x << ", y = " << ptr->y << std::endl;

    return 0;
}