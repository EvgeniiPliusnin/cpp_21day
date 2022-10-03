#include <iostream>
using namespace std;

class Fish {
    private:
        bool is_fresh_water_fish;

    public:
        Fish (bool is_fresh) : is_fresh_water_fish(is_fresh) {}

        void swim() {
            if(is_fresh_water_fish) {
                cout << "Swims in lake" << endl;
            } else {
                cout << "Swims in sea" << endl;
            }
        }
};

class Tuna : public Fish {
    public:
        Tuna() : Fish(false) {}

        void swim() {
            cout << "Tuna swims real fast" << endl;
        }
};

class Carp : public Fish {
    public:
        Carp() : Fish(true) {}

        void swim() {
            cout << "Carp swims real slow" << endl;
        }
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
