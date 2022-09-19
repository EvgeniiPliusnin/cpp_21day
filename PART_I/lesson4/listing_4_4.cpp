#include <iostream>
#include <vector>

using namespace std; 

int main(int argc, char const *argv[])
{
    vector<int> dyn_array (3);  // dynamic array of int

    dyn_array[0] = 365;
    dyn_array[1] = -421;
    dyn_array[2] = 789;

    cout << "Amount of integers in array: " << dyn_array.size() << endl;

    cout << "Enter anoter element to insert " << endl;
    int new_value = 0;
    cin >> new_value;
    dyn_array.push_back(new_value);
    cout << "Amount of integers in array: " << dyn_array.size() << endl;
    cout << "Last element in array: ";
    cout << dyn_array[dyn_array.size() - 1] << endl;
}
