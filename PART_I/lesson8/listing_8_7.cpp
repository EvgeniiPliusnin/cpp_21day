#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Request for memory space for an int
    int* p_to_int = new int;

    // Use the allocated memory to store a number
    cout << "Enter your dog's age: ";
    cin >> *p_to_int;

    // Use indirection operator* to access value
    cout << "Age " << *p_to_int << " is stored at " << hex << p_to_int << endl;
    delete p_to_int;

    return 0;
}
