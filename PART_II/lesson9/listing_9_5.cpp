#include <iostream>
#include <string>
using namespace std;

class Human {
private:
    int age;
    string name;

public:
    Human(string human_name, int human_age) {
        name = human_name;
        age = human_age;
        cout << "overlaoaded constructor creates " << name << endl;
        cout << name  << " is " << age << " years old" << endl;
    }    

    void introduced_self() {
        cout << "I am " << name << " and am " << age << " years old" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Human first_man ("Adam", 25);
    Human first_woman("Eve", 28);

    first_man.introduced_self();
    first_woman.introduced_self();

    return 0;
}
