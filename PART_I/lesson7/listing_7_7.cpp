#include <iostream>
#include <math.h>

using namespace std;

double area(double radius); // for circle
double area(double radius, double height); // for cylinder

double area(double radius) {
    return M_PI * pow(radius, 2);
}

double area(double radius, double height) {
    return 2 * area(radius) + 2 * M_PI * radius * height;
}


int main(int argc, char const *argv[])
{
    cout << "Enter z for Cylinder and c for Circle: ";
    char user_select = 'z';
    cin >> user_select;

    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    if (user_select == 'z') {
        cout << "Enter height: ";
        double height = 0;
        cin >> height;

        cout << "Area of Cylinder is: " << area(radius, height) << endl;
    } else {
        cout << "Area of Circle is: " << area(radius) << endl;
    }
    
    return 0;
}
