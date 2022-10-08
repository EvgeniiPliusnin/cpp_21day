#include <iostream>

// template with default params: int & double
template <typename T1 = int, typename T2 = double>
class HoldPairs {
    private:
        T1 value1;
        T2 value2;
    
    public:
        HoldPairs(const T1& val1, const T2& val2) : value1(val1), value2(val2) {}

        // accessor functions
        const T1& get_first_value() const {
            return value1;
        }

        const T2& get_second_value() const {
            return value2;
        }
};

int main(int argc, char const *argv[])
{
    HoldPairs <> pair_int_double (300, 10.09);
    HoldPairs<short, const char*> pair_short_str (25, "Learn templates, Love C++");

    std::cout << "The first object contains:" << std::endl;
    std::cout << "Value1 " << pair_int_double.get_first_value() << std::endl;
    std::cout << "Value2 " << pair_int_double.get_second_value() << std::endl;

    std::cout << "The second object contains:" << std::endl;
    std::cout << "Value1 " << pair_short_str.get_first_value() << std::endl;
    std::cout << "Value2 " <<pair_short_str.get_second_value() << std::endl;

    return 0;
}
