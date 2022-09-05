#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned short uShortValue = 65535;
    cout << "Incrementing unsigned short " << uShortValue << "gives ";
    cout << ++uShortValue << endl;

    short signed_short = 32767;
    cout << "incrementing signed short " << signed_short << "gives: " << ++signed_short << endl;
    return 0;
}
