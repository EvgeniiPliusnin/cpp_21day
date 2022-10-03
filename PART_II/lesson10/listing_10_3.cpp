#include <iostream>
using namespace std;

class Fish {
    protected:
        bool is_fresh_water_fish;

    public:
        Fish(bool is_fresh_water) : is_fresh_water_fish(is_fresh_water) {}

        void swim() {
            if (is_fresh_water_fish) {
                cout << "Swims in lake" << endl;
            } else {
                cout << "Swims in sea" << endl;
            }
        }
};

class Tuna : public Fish {
    public:
        Tuna() : Fish(false) {}
};

class Carp : public Fish {
    public: 
        Carp() : Fish(true) {}
};

int main(int argc, char const *argv[])
{
    Carp my_lunch;
    Tuna my_dinner;

    cout << "About my food: " << endl;
    cout << "Lunch - ";
    my_lunch.swim();
    cout << "Dinner - ";
    my_dinner.swim();

    return 0;
}
