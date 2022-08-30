#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(int argc, char const *argv[])
{
    std::cout << "This programm will help you multiply two numbers" << std::endl;

    cout << "Enter the first number: ";
    int first_number = 0;
    cin >> first_number;

    cout << "Enter the second number: ";
    int second_number = 0;
    cin >> second_number;

    // Multiply two numbers and store result in a variable
    int multiply_result = first_number * second_number;
    cout << first_number << " * " << second_number << " equals " << multiply_result << endl;

    return 0;
}
