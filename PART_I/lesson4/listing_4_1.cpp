#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int my_numbers[] = {123, -1234, 5002, 365};
    
    cout << setw(30) << left << "First element at index 0: " << my_numbers[0] << endl;
    cout << setw(30) << left << "Second element at index 1: " << my_numbers[1] << endl;
    cout << setw(30) << left << "Third element at index 2: " << my_numbers[2] << endl;
    cout << setw(30) << left << "Fourth element at index 3: " << my_numbers[3] << endl;
    cout << setw(30) << left << "Fifth element at index 4: " << my_numbers[4] << endl;

    return 0;
}
