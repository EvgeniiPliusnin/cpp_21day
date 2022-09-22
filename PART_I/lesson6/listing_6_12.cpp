#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int some_nums[] = {1, 101, -1, 40, 2040 };
    for (const int& num : some_nums){
        cout << num << ", ";
    }
    cout << endl;

    for (auto element : {5, 222, 110, -45, 2017}){
        cout << element << ", ";
    }
    cout << endl;

    char char_array[] = {'h', 'e', 'l', 'l', 'o'};
    for (auto achar : char_array) {
        cout << achar << ", ";
    }
    cout << endl;

    double more_nums[] = {3.14, -1.3, 22, 1010};
    for (auto element : more_nums) {
        cout << element << ", ";
    }
    cout << endl;

    string say_hello{ "Hello World!" };
    for (auto element : say_hello) {
        cout << element << "";
    }    
    cout << endl;
    
    return 0;
}
