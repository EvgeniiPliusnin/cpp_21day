#include <iostream>

using std::cout;
using std::endl;

// function declaration
int demo_console_output();

int main(int argc, char const *argv[])
{
    demo_console_output();
    return 0;
}


// function definition
int demo_console_output() {
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing division of 10 by 5 = " << 10/5 << endl;
    cout << "Pi when approximated is 22 / 7 = " << 22/7 << endl;
    cout << "Pi more accurately is 22 / 7 = " << 22.0/7 << endl;

    return 0;
}