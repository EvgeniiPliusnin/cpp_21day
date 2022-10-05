#include <iostream>

class Fish {
    public:
        virtual void swim() {
            std::cout << "Fish swims!" << std::endl;
        }
};

class Tuna : public Fish {
    public:
        // override Fish::swim
        void swim() {
            std::cout << "Tuna swims!" << std::endl;
        }
};

class Carp : public Fish {
    public:
        // override Fish::swim
        void swim() {
            std::cout << "Carp swims!" << std::endl;
        }
};

void make_fish_swim(Fish& fish) {
    // calling virtual method swim()
    fish.swim();
}

int main(int argc, char const *argv[])
{
    Tuna tuna;
    Carp carp;

    make_fish_swim(tuna);
    make_fish_swim(carp);

    return 0;
}
