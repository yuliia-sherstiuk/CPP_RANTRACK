#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "Animal.hpp"
#include <iostream>

class Chien : public Animal {
public:
    void crier() const override;
    void manger() const override;
};

#endif