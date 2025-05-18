#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"

int main() {
    Chien monChien;
    Chat monChat;

    std::cout << "Le chien dit : ";
    monChien.crier();
    monChien.manger();

    std::cout << "\nLe chat dit : ";
    monChat.crier();
    monChat.manger();

    return 0;
}
