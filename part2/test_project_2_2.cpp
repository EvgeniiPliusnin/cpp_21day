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
    cout << "Performing minus of 5 from 10 = " << 10 - 5 << endl;
    cout << "Performing multiply 5 by 10 = " << 10 * 5 << endl;

    return 0;
}