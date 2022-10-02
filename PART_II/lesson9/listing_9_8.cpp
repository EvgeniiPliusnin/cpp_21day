#include <iostream>
#include <string.h>
using namespace std;

class MyString {
private:
    char* buffer;

public:
    MyString(const char* init_string) { // Constructor
        buffer = NULL;
        if(init_string != NULL) {
            buffer = new char [strlen(init_string) + 1];
            strcpy(buffer, init_string);
        }
    }

    ~MyString() { // Destructor
        cout << "Invoked destructor, clearing up! " << endl;
        delete[] buffer;
    }

    int get_length() {
        return strlen(buffer);
    }

    const char* get_string() {
        return buffer;
    }
};

void use_my_string(MyString str) {
     cout << "String buffer in my string is " << str.get_length() << " characters long" << endl;
     cout << "buffer contains: " << str.get_string() << endl;
}


int main(int argc, char const *argv[])
{
    MyString say_hello("hello from String Class");
    use_my_string(say_hello);

    return 0;
}
