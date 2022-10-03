#include <iostream>
#include <string>
using namespace std;

class Human {
private:
    friend void display_age(const Human& person);
    string name;
    int age;

public:
    Human (string human_name, int human_age) {
        this->age = human_age;
        this->name = human_name;
    }

};

void display_age(const Human& person) {
    cout << person.age << endl;
}

int main(int argc, char const *argv[])
{
    Human first_man("Adam", 25);
    cout << "Accessing private member age via friend function: ";
    display_age(first_man);
    return 0;
}
