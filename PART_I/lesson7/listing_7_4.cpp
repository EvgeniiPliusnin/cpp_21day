#include <iostream>
using namespace std;
// Function declarations (Prototypes)
double area(double radius, double pi = 3.14);

int main(int argc, char const *argv[])
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    cout << "Pi is 3.14. do you wish to change this (y/n)? ";
    char change_pi = 'n';
    cin >>change_pi;

    double circle_area = 0;
    if (change_pi == 'y') {
        cout << "Enter new pi: ";
        double new_pi = 3.14;
        cin >> new_pi;
        circle_area = area(radius, new_pi);
    } else {
        circle_area = area(radius);
    }
    cout << "Area is " << circle_area << endl;
    return 0;
}

double area(double radius, double pi) {
    return pi * radius * radius;
}