#include <iostream>
#include <string>
using namespace std;

class Human {
private:
    int age;
    string name;

public:
    Human (string human_name = "Adam", int huma_age = 25) : name(human_name), age(huma_age) {
        cout << "Constructed a human called " << name;
        cout << ", " << age << " years old" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Human test;
    Human eve("Eve", 18);

    return 0;
}
