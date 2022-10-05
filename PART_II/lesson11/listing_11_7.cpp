#include <iostream>

class Animal {
    public:
        Animal() {
            std::cout << "Animal constructor" << std::endl;
        }

        int age;
};

class Mammal : public Animal {

};

class Bird : public Animal {

};

class Reptile : public Animal {

};

class Platypus : public Mammal, public Bird, public Reptile {
    public:
        Platypus () {
            std::cout << "Platupys constuctor" << std::endl;
        }
};

int main(int argc, char const *argv[])
{
    Platypus duck_billed;

    return 0;
}

