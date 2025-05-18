#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {
public:
    virtual void crier() const = 0;   // méthode pure (абстрактная)
    virtual void manger() const = 0;  // méthode pure (абстрактная)
    virtual ~Animal() {}              // виртуальный деструктор
};

#endif