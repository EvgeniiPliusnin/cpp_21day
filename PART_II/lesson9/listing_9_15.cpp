#include <iostream>
#include <string>
using namespace std;

class Human {
private:
    friend class Utility;
    string name;
    int age;

public:
    Human (string name, int age) {
        this->age = age;
        this-> name = name;
    }

};

class Utility {
public:
    static void display_age(const Human& person) {
        cout << person.age << endl;
    }

};

int main(int argc, char const *argv[])
{
    Human first_man("Adam", 25);
    cout << "accessing private member via friend class: ";
    Utility::display_age(first_man);

    return 0;
}
