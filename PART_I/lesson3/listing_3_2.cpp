#include <iostream>

using namespace std;

void multiply_numbers () {
    cout << "Enter the first number: ";
    int first_number = 0;
    cin >> first_number;

    cout << "Enter the second number: ";
    int second_number = 0;
    cin >> second_number;

    // Multiply two numbers, store result in a variable
    int multiplication_result = first_number * second_number;

    // Display result
    cout << first_number << " X " << second_number;
    cout << " = " << multiplication_result << endl;
}

int main(int argc, char const *argv[])
{
    cout << "This program will help you multiply two numbers" << endl;
    multiply_numbers();
    return 0;
}
