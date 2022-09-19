#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char say_hello[] = {'H', 'e', 'l', 'l', 'o', };
    cout << say_hello << endl;
    cout << "Size of array: " << sizeof(say_hello) << endl;

    cout << endl << "Replacing space with null" << endl;
    say_hello[3] = '\0';
    cout << say_hello << endl;
    cout << "Size of array: " << sizeof(say_hello) << endl;    

    return 0;
}
