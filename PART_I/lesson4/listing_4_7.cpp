#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    string greet_string ("Hello std::string!");
    cout << greet_string << endl;

    cout << "Enter a line of text: " << endl;
    string first_line;
    getline(cin, first_line);
    
    cout << "Enter another: " << endl;
    string second_line;
    getline(cin, second_line);


    cout << "Result of concatanation: " << endl;
    string concat_string = first_line + second_line;
    cout << concat_string << endl;

    cout << "Copy of concatanated string: " << endl;
    string a_copy;
    a_copy = concat_string;
    cout << a_copy << endl;

    cout << "Length of concat string is: " << concat_string.length() << endl;
    
    return 0;
}
