#include <iostream>
using namespace std;

// there global integers
int first_number = 0;
int second_number = 0;
int multiplication_result = 0;

void multiply_numbers(void) {
    cout << "Enter the first number: ";
    cin >> first_number;

    cout << "Enter the second number: ";
    cin >> second_number;

    // multiply two numbers, store result in a variable
    multiplication_result = first_number * second_number;
    
    // Disply result
    cout << "Displaying from multiply_numbers(): ";
    cout << " = " << multiplication_result << endl;
}

int main(int argc, char const *argv[])
{
    cout << "This program will help you multiply two numbers" << endl;

    // Call the function that does all the work
    multiply_numbers();
    cout << "Displyed from main(): ";
    // This line will now compile and work!
    cout << first_number << " X " << second_number;
    cout << " = " << multiplication_result << endl;
    return 0;
}
