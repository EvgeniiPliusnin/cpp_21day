#include <iostream>
using namespace std;

class Fish {
    private:
        bool is_fresh_water_fish;

    public:
        Fish(bool is_fresh) : is_fresh_water_fish(is_fresh) {}

        void swim() {
            if(is_fresh_water_fish) {
                cout << "fish swims in lake" << endl;
            } else {
                cout << "fish swims in sea" << endl;
            }
        }
};

class Tuna : public Fish {
    public:
        Tuna() : Fish (false) {}

        void swim() {
            cout << "Tuna swims real fast" << endl;
            Fish::swim();
        }
};

int main(int argc, char const *argv[])
{
    Tuna lunch;
    lunch.swim();
    lunch.Fish::swim();

    return 0;
}
