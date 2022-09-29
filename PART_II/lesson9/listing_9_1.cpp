#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
    string name;
    int age;

    void introduce_self() {
        cout << "I am " << name << " and am " << age << " years old" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Human first_man;
    first_man.name = "Adam";
    first_man.age = 30;

    Human first_woman;
    first_woman.name = "Eve";
    first_woman.age = 28;

    first_man.introduce_self();
    first_woman.introduce_self();

    return 0;
}
