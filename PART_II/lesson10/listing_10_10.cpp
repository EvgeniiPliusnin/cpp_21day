#include <iostream>

class Mammal {
    public:
        void feed_baby_milk () {
            std::cout << "Mammal: Baby says glug!" << std::endl;
        }
};

class Reptile {
    public:
        void spit_venom() {
            std::cout << "Reptile: Shoo enemy! Spit venom!" << std::endl;
        }
};

class Bird {
    public:
        void lay_eggs() {
            std::cout << "Bird: Laid my eggs, am lighter now!" << std::endl;
        }
};

class Platupys final : public Mammal, public Bird, public Reptile {
    public:
        void swim() {
            std::cout << "Platupys: Voily, I can swim!" << std::endl;
        }
};

int main(int argc, char const *argv[])
{
    Platupys real_freak;
    real_freak.lay_eggs();
    real_freak.feed_baby_milk();
    real_freak.spit_venom();
    real_freak.swim();

    return 0;
}
