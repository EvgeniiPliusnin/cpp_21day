#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Is it sunny ? (y/n) ";
    char user_input = 'y';
    cin >> user_input;

    // declare pointer and initialize
    bool*  const is_sunny = new bool;
    *is_sunny = true;

    if(user_input == 'n') {
        *is_sunny = false;
    }

    cout << "Boolean flag sunny says: " << *is_sunny << endl;
    delete is_sunny;

    return 0;
}
