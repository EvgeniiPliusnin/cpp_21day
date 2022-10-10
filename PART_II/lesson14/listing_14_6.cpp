#include <iostream>

template <typename T>
class TestStatic {
    public:
        static int static_val;
};

// static member initialization
template<typename T> int TestStatic<T>::static_val;

int main(int argc, char const *argv[])
{
    TestStatic<int> int_instance;
    std::cout << "Settning static_val for int_instance to 2011" << std::endl;
    int_instance.static_val = 2011;

    TestStatic<double> db_instance;
    std::cout << "Stting static_val for db_instance to 1011" << std::endl;
    db_instance.static_val = 1011;

    std::cout << "int_instance.static_val = " << int_instance.static_val << std::endl;
    std::cout << "db_instance.static_val = " << db_instance.static_val << std::endl;

    return 0;
}
