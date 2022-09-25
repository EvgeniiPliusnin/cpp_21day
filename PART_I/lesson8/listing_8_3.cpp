#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age = 30;
    int* p_to_int = &age;
    cout << "p_to_int points to age now, print value of age using pointer is " << *p_to_int << endl;
    cout << "p_to_int = " << hex << p_to_int << endl;

    int dog_age = 9;
    p_to_int = &dog_age;
    cout << "p_to_int points to dog_age now, print value of dog_age using pointer is " << *p_to_int << endl;
    cout << "p_to_int = " << hex << p_to_int << endl;

    return 0;
}
