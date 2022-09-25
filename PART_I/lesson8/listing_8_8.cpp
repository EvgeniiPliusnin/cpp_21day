#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "How many integers shell I reserve memory for? " << endl;
    int num_entries = 0;
    cin >> num_entries;

    int* my_numbers = new int[num_entries];
    cout << "Memory allocated at: " << hex << my_numbers << endl;

    delete[] my_numbers;

    return 0;
}
