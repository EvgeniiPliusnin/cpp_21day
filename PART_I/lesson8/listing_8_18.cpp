#include <iostream>
using namespace std;

void get_square(int& number) {
    number *= number;
}

int main(int argc, char const *argv[])
{
    cout << "Enter a number to calculate its square: ";
    int number = 0;
    cin >> number;

    get_square(number);
    cout << "square is: " << dec << number << endl;

    return 0;
}
