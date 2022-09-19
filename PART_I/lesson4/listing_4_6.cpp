#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
    cout <<  "Enter a word NOT longer than 20 characters: " << endl;

    char user_input[21] = {'\0'};
    cin >> user_input;

    cout << "Length of your input was: " << strlen(user_input) << endl;
    return 0;
}
