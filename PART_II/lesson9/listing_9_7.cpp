#include <iostream>
#include <string.h>
using namespace std;

class MyString {
private:
    char* buffer;

public:
    MyString(const char* init_string) { // constructor
        if (init_string != NULL) {
            buffer = new  char[strlen(init_string) + 1];
            strcpy(buffer, init_string);
        } else {
            buffer = NULL;
        }
    }

    ~MyString() {
        cout << "invoked destructor, clearing up" << endl;
        if(buffer != NULL) {
            delete[] buffer;
        }
    }

    int get_length() {
        return strlen(buffer);
    }

    const char* get_string() {
        return buffer;
    }
};

int main(int argc, char const *argv[])
{
    MyString say_hello("Hello from String Class");
    cout << "String buffer in say_hello object is '" << say_hello.get_length();
    cout << " charcters long" << endl;

    cout << "Buffer contains: " << say_hello.get_string() << endl;

    return 0;
}
