#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

class Human {
    int age;
public:
    explicit Human(int human_age) : age(human_age) {}

    int get_age() {
        return age;
    }
};

void do_something(Human person) {
    cout << "Human sent did something ";
    cout << ", age is: " << person.get_age() << endl;

    return;
}

int main(int argc, char const *argv[])
{
    Human kid_1(10);
    Human kid_2 = Human(11);

    do_something(kid_1);
    do_something(kid_2);

    return 0;
}
