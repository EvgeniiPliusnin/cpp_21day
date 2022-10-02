#include <iostream>
#include <string>
using namespace std;

class Human {
private:
    string name;
    int age;

public:
    Human() {
        age = 0;
        cout << "Default constructor: name and age are not installed" << endl;
    }

    Human(string human_name, int human_age) {
        name = human_name;
        age = human_age;
        cout << "Overloaded constructor creates ";
        cout << name << " is " << age << " old years" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Human first_man; // use default constructor
    Human first_woman ("Eve", 20); // use overloaded constructor    

    return 0;
}
