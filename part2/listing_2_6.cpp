#include <iostream>
#include <string>

// using namespace std;
int main(int argc, char const *argv[])
{
    int input_number;
    std::cout << "Enter an integer: ";
    std::cin >> input_number;

    std::cout << "Enter your name: ";
    std::string input_name;
    std::cin >> input_name;

    std::cout << input_name << " entered " << input_number << std::endl;

    return 0;
}
