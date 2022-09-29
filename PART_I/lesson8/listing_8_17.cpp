#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int original = 30;
    cout << "original value is " << original << endl;
    cout << "original variable is at address: " << &original << hex << endl;

    int& ref_1 = original;
    cout << "ref_1 is at address: " << hex << &ref_1 << endl;

    int& ref_2 = ref_1;
    cout << "ref_2 is at address: " << hex << &ref_2 << endl;

    cout << "Therefore, ref_2 = " << dec << ref_2 << endl;

    return 0;
}
