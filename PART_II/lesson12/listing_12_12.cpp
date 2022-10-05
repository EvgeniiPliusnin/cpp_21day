#include <iostream>

struct Temperature{
    double Kelvin;
    Temperature(long double kelvin) : Kelvin(Kelvin) {};
};

Temperature operator "" _C (long double celcius) {
    return Temperature(celcius + 273);
}

Temperature operator "" _F (long double fahrenheit) {
    return ((fahrenheit  + 459.67) * 5 / 9);
}

int main(int argc, char const *argv[])
{
    Temperature k1 = 31.73_F;
    Temperature k2 = 0.0_C;

    std::cout << "k1 is " << k1.Kelvin << " Kelvin" << std::endl;
    std::cout << "k2 is " << k2.Kelvin << " Kelvin" << std::endl;

    return 0;
}
