#include <iostream>
using namespace std;

const double pi = 3.1416;

void area(double radius, double& result) {
    result = pi * radius * radius;
}

int main(int argc, char const *argv[])
{
    cout << "Enter the radius: ";
    double radius = 0;
    cin >> radius;

    double area_fetched = 0;
    area(radius, area_fetched);

    cout << "The area is " << area_fetched << endl;

    return 0;
}
