#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    try{
        // Requests a lot of memory
        cout << "really try it" << endl;
        int* ptr_to_many_nums = new int[0xffffffffff];
        // use the allocated memory
        delete[] ptr_to_many_nums;
    }
    catch(bad_alloc){
        cout << "Memory allocation failed" << endl;
    }
    

    return 0;
}
