#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Enter two integers: " << endl;
    int num_1 = 0, num_2 = 0;
    cin >> num_1;
    cin >> num_2;

    cout << "Enter \'m\' to multiply, anything else to add: " << endl;
    char user_choice = '\0';
    cin >> user_choice;

    int result = 0;
    if (user_choice == 'm'){
        result = num_1 * num_2;
    } else {
        result = num_1 + num_2;
    }
    cout << "result is: " << result << endl;
    
    return 0;
}
