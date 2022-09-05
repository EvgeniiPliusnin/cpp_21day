#include <iostream>

using namespace std;

void multiply_numbers() {
    cout << "Enter the first number: ";
    int first_number = 0;
    cin >> first_number;

    cout << "Enter the cecond number: ";
    int second_number = 0;
    cin >> second_number;

    // Multiyply two numbers, store result in variable
    int multiplyplication_result = first_number * second_number;
    cout << first_number << " * " << second_number << " equals " << multiplyplication_result << endl;
}

int main(int argc, char const *argv[])
{
    multiply_numbers();
    return 0;
}
