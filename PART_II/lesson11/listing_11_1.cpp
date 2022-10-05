#include <iostream>

class Fish {
    public:
        void swim() {
            std::cout << "Fish swims" << std::endl;
        }   
};

class Tuna : public Fish {
    public:
        // override Fish::swim
        void swim() {
            std::cout << "Tuna swims" << std::endl;
        }
};

void make_fish_swim(Fish& input_fish) {
    input_fish.swim();
}

int main(int argc, char const *argv[])
{
    Tuna my_dinner;

    // calling Tuna::swim
    my_dinner.swim();

    // sending Tuna as fish
    make_fish_swim(my_dinner);

    return 0;
}
