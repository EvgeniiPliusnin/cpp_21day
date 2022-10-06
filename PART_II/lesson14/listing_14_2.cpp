#include <iostream>
#include <string>

#define SQUARE(x) ((x) * (x))
#define PI 3.1416
#define AREA_CIRCLE(r) (PI * (r) * (r))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(int argc, char const *argv[])
{
    std::cout << "Enter a integer: ";
    int num;
    std::cin >> num;

    std::cout << "Square of " << num << " = " << SQUARE(num) << std::endl;
    std::cout << "Area of circle with radius " << num << " = ";
    std::cout << AREA_CIRCLE(num) << std::endl;

    std::cout << std::endl << "Enter another integer: ";
    int num2;
    std::cin >> num2;
    std::cout << "MIN(" << num << ", " << num2 << ") = ";
    std::cout << MIN(num, num2) << std::endl;

    std::cout << "MAX(" << num << ", " << num2 << ") = ";
    std::cout << MAX(num, num2) << std::endl;

    return 0;
}
