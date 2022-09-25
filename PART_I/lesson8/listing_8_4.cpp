#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age = 30;
    cout << "Integer age = " << age << endl;

    int* p_to_int = &age;
    cout << "pointer p_to_int points to 'age', and p_to_int = " << hex << p_to_int << endl;
    cout << "value at the pointed location (*p_to_int) is " << dec << *p_to_int << endl;

    *p_to_int = 41;
    cout << "change value of 'integer age' using pointer " << endl;
    cout << "value of variable 'age' is " << dec << age << endl;

    return 0;
}
