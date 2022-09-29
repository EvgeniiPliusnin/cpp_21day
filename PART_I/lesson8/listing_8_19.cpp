#include <iostream>
using namespace std;

void get_square(const int& number, int& result) {
    result = number * number;
}

int main(int argc, char const *argv[])
{
    cout << "Enter a number to calculate its square: ";
    int number = 0;
    cin >> number;

    int square = 0;
    get_square(number, square);
    cout << number << " ^2 equals " << square << endl;

    return 0;
}
