#include <iostream>
using namespace std;

// function declaration and definition
int demo_console_output() {
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing division of 10 by 5 = " << 10/5 << endl;
    cout << "Pi when approximated is 22 / 7 = " << 22/7 << endl;
    cout << "Pi more accurately is 22 / 7 = " << 22.0/7 << endl;

    return 0;
}

int main(int argc, char const *argv[])
{
   return demo_console_output();
}
