#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "How many integers do you want to enter? ";
    int num_integers = 0;
    cin >> num_integers;

    int* pointer_to_int = new int [num_integers];

    cout << "Allocated memory for " << num_integers << " integers" << endl;
    for (int counter = 0; counter < num_integers; ++counter){
        cout << "Enter number " << counter << ": ";
        cin >> *(pointer_to_int + counter);
    }

    cout << "Displaying all entered numbers: " << endl;
    for (int counter = 0; counter < num_integers; ++counter){
        cout << *(pointer_to_int++) << endl;
    }    

    // return pointer to intitial position:
    pointer_to_int -= num_integers;

    // release allocated memory
    delete[] pointer_to_int;

    return 0;
}
