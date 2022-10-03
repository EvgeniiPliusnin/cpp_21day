#include <iostream>
using namespace std;

union SimpleUnion {
    int num;
    char alphabet;
};

struct  ComplexType {
    enum DataType {
        Int,
        Char,
    } Type;

    union Value {
        int num;
        char alphabet;

        Value () {}
        ~Value() {}
    } value;
    
};

void display_complex_type(const ComplexType& obj) {
    switch (obj.Type)
    {
    case ComplexType::Int:
        cout << "Union contains number: " << obj.value.num << endl;
        break;
    
    case ComplexType::Char:
        cout << "Union contains character: " << obj.value.alphabet << endl;
        break;

    default:
        break;
    }
}

int main(int argc, char const *argv[])
{
    SimpleUnion u1, u2;
    u1.num = 2100;
    u2.alphabet = 'C';
    cout << "sizeof(u1) containing integer " << sizeof(u1) << endl;
    cout << "sizeof(u2) containing character " << sizeof(u2) << endl;

    ComplexType my_data_1, my_data_2;
    my_data_1.Type = ComplexType::Int;
    my_data_1.value.num = 2017;

    my_data_2.Type = ComplexType::Char;
    my_data_2.value.alphabet = 'X';

    display_complex_type(my_data_1);
    display_complex_type(my_data_2);

    return 0;
}
