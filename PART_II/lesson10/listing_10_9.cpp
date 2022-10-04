#include <iostream>
using namespace std;

class Motor {
    public:
        void switch_ignition() {
            cout << "switch ignition" << endl;
        }

        void pump_fuel() {
            cout << "pump fuel" << endl;
        }

        void fire_cylinders() {
            cout << "Vroooom" << endl;
        }
};

class Car : protected Motor {
    public:
        void move() {
            switch_ignition();
            pump_fuel();
            fire_cylinders();
        }
};

class RaceCar : protected Car {
    public:
        void move() {
            switch_ignition();
            pump_fuel();
            fire_cylinders();
            fire_cylinders();
            fire_cylinders();
        }
};

int main(int argc, char const *argv[])
{
    RaceCar my_dream_car;
    my_dream_car.move();

    return 0;
}
