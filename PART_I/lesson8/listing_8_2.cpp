#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age = 30;
    int* p_to_age = &age;
    cout << "Integer age is at: " << hex << &age << endl;
    cout << "p_to_age refer to: " << hex << p_to_age << endl;
    return 0;
}
