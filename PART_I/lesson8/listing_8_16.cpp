#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int* ptr_to_int = new(nothrow) int[0xffffffffff];
    if(ptr_to_int) {
        delete[] ptr_to_int;
    } else {
        cout << "Memory allocation has failed" << endl;
    }

    return 0;
}
