#include <iostream>
#include <string>

template <typename Type>
const Type& get_max(const Type& value1, const Type& value2) {
    if (value1 > value2) {
        return value1;
    } else {
        return value2;
    }
}

template <typename Type>
void display_comparison(const Type& value1, const Type& value2) {
    std::cout << "get_max(" << value1 << ", " << value2 << ") = ";
    std::cout << get_max(value1, value2) << std::endl;
}

int main(int argc, char const *argv[])
{
    int num1 = -101, num2 = 2011;
    display_comparison<int>(num1, num2);

    double d1 = 3.14, d2 = 3.1416;
    display_comparison<double>(d1, d2);

    std::string name1 ("Jack"), name2 ("John");
    display_comparison <std::string>(name1, name2);

    return 0;
}
