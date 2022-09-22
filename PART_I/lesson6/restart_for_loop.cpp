#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bool temp = false;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        if(i == 7) {
            continue;
        }
        cout << " ";
    }
    
    return 0;
}
