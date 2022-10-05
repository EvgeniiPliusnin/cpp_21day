#include <iostream>

class Animal {
    public:
        Animal () {
            std::cout << "Animal constructor" << std::endl;
        }

        // sample member
        int age;
};

class Mammal : public virtual Animal {

};

class Bird : public virtual Animal {

};

class Reptile : public virtual Animal {

};

class Platupys final : public Mammal, public Bird, public Reptile {
    public: 
        Platupys() {
            std::cout << "Platupys constructor" << std::endl;
        }
};

int main(int argc, char const *argv[])
{
    Platupys dickbill;
    dickbill.age = 25;

    return 0;
}
