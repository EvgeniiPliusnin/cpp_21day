#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human() { // constructor
        age = 1;
        cout << "Constructed an instance of class Human " << endl;
    }    

    void set_name(string humans_name) {
        name = humans_name;
    }

    void set_age(int humans_age) {
        age = humans_age;
    }

    void introduce_self() {
        cout << "I am " << name << " and am ";
        cout << age << " years old" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Human first_woman;
    first_woman.set_age(28);
    first_woman.set_name("Eve");
    first_woman.introduce_self();
    
    return 0;
}

