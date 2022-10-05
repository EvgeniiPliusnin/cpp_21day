#include <iostream>

class Fish {
    public:
        // define a pure virtual method
        virtual void swim() = 0;
};

class Tuna : public Fish {
    public:
        // mandatory overriding
        void swim() {
            std::cout << "Tuna swims fast and in the sea" << std::endl;
        }
};

class Carp : public Fish {
    public:
        void swim() {
            std::cout << "Carp swims slow and in the lake" << std::endl;
        }
};

void make_fish_swim(Fish& fish) {
    fish.swim();
}

int main(int argc, char const *argv[])
{
    Carp my_lunch;
    Tuna my_dinner;

    make_fish_swim(my_lunch);
    make_fish_swim(my_dinner);

    return 0;
}
