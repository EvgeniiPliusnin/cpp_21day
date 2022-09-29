#include <iostream>
using namespace std;

class Human
{
private:
    int age;

public:
    void set_age(int input_age) {
        age = input_age;
    }    
    
    int get_age() {
        if (age > 30) {
            return age - 2;
        } else {
            return age;
        }
    }
};

int main(int argc, char const *argv[])
{
    Human first_man;
    first_man.set_age(35);

    Human first_woman;
    first_woman.set_age(22);

    cout << "Age of first_man is " << first_man.get_age() << endl;
    cout << "Age of first_woman is " << first_woman.get_age() << endl;

    return 0;
}
