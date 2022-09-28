#include <iostream>
using namespace std;

void calc_area(const double* const prt_pi,
               const double* const ptr_radius,
               double* const ptr_area) {
    // check not zero value i
    if (prt_pi && ptr_radius && ptr_area) {
        *ptr_area = (*prt_pi) * (*ptr_radius) * (*ptr_radius);
    }
}

int main(int argc, char const *argv[])
{
    const double pi = 3.1416;

    cout << "Enter the radius of circle: ";
    double radius = 0;
    cin >> radius;

    double area = 0;
    calc_area(&pi, &radius, &area);
    cout << "the area of circle is " << area << endl;

    return 0;
}
