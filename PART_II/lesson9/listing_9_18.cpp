#include <iostream>
using namespace std;

class Human {
    int age;

public:
    constexpr Human(int human_age) : age (human_age) {}
    constexpr int get_age() const {return age;}
};

int main(int argc, char const *argv[])
{
    constexpr Human some_person(15);
    const int his_age = some_person.get_age();

    Human another_person(45);   // non constant expression 

    return 0;
}
