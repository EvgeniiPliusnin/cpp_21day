#include <iostream>
using namespace std;

class Motor {
    public:
        void switch_ignition() {
            cout << "Ignition Switch" << endl;
        }

        void pump_fuel() {
            cout << "Fuel in cylinders" << endl;
        }

        void fire_cylinders() {
            cout << "Vroooooom" << endl;
        }
};

class Car : private Motor { // private inheritance
    public:
        void move() {
            switch_ignition();
            pump_fuel();
            fire_cylinders();
        }
};

int main(int argc, char const *argv[])
{
    Car my_dream_car;
    my_dream_car.move();

    return 0;
}
