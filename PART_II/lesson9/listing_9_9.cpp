#include <iostream>
#include <string.h>
using namespace std;

class MyString {
private:
    char* buffer;

public:
    MyString(const char* init_string) { // constructor
        buffer = NULL;
        if (init_string != NULL) {
            buffer = new char [strlen(init_string) + 1];
            strcpy(buffer, init_string);
            cout << "buffer points to: " << hex << (unsigned int*) buffer << endl;
        }
    }

    MyString(const MyString& copy_source) { // copy constructor
        buffer = NULL;
        cout << "Copy constructor: coping from MyString" << endl;
        if(copy_source.buffer != NULL) {
            // allocate own buffer
            buffer = new char [strlen(copy_source.buffer) + 1];
            // deep copy from the source to local buffer
            strcpy(buffer, copy_source.buffer);
            cout << "buffer points to: " << hex << (unsigned int*) buffer << endl;
        }
    }

    ~MyString() {
        cout << "Invoked destructor, clear up" << endl;
        delete[] buffer;
    }

    int get_len() {
        return strlen(buffer);
    }

    const char* get_buffer() {
        return buffer;
    }
};

void use_my_string(MyString str) {
    cout << endl;
    cout << "String buffer in MyString is " << str.get_len() << " character long" << endl;
    cout << "Buffer contains: " << str.get_buffer() << endl;
    
    return;
}

int main(int argc, char const *argv[])
{
    MyString say_hello("Hello from MyString Class");
    use_my_string(say_hello);

    return 0;
}
