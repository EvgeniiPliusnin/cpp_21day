#include <iostream>
#include <string>

#define ARRAY_LENGTH 25
#define PI 3.1416
#define MY_DOUBLE double
#define FAV_WISCKY "Jack Daniels"

int main(int argc, char const *argv[])
{
    int numbers [ARRAY_LENGTH] = {0};
    std::cout << "Array's length is " << sizeof(numbers)/sizeof(int) << std::endl;

    std::cout << "Enter a radius ";
    MY_DOUBLE radius;
    std::cin >> radius;
    std::cout << "Area is " << PI * radius * radius << std::endl;

    std::string favorite_whisky (FAV_WISCKY);
    std::cout << "favorite whisky is " << favorite_whisky << std::endl;

    return 0;
}
