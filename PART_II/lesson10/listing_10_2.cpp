#include <iostream>
using namespace std;

class Fish {
    protected:
        bool is_fresh_water_fish;
    
    public:
        void swim() {
            if(is_fresh_water_fish) {
                cout << "swims in lake" << endl;
            } else {
                cout << "swims in sea" << endl;
            }
        }
};

class Tuna : public Fish {
    public:
        Tuna() {
            is_fresh_water_fish = false;
        }
};

class Carp : public Fish {
    public:
        Carp() {
            is_fresh_water_fish = true;
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
