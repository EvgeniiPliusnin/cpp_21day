#include <iostream>
#include <string.h>
using namespace std;

class MyString {
private:
    char* buffer;

public:
    MyString(const char* init_string) { // default constructor
        buffer = NULL;
        if(init_string != NULL) {
            buffer = new char [strlen(init_string) + 1];
            strcpy(buffer, init_string);
        }
    }

    MyString(const MyString& copy_source) { // copy constructor
        buffer = NULL;
        if(copy_source.buffer != NULL) {
            buffer = new char [strlen(copy_source.buffer) + 1];
            strcpy(buffer, copy_source.buffer);
        }
    }

    ~MyString() {
        delete[] buffer;
    }

    int get_length() {
        return strlen(buffer);
    }

    const char* get_string() {
        return buffer;
    }
};

class Human {
private:
    int age;
    bool gender;
    MyString name;

public:
    Human (const MyString& input_name, int input_age, bool gender)
        : name (input_name), age (input_age), gender(gender) {}
    
    int get_age() {
        return age;
    }
};

int main(int argc, char const *argv[])
{
    MyString mans_name("Adam");
    MyString womans_name("Eve");

    cout << "sizeof(MyString) = " << sizeof(MyString) << endl;
    cout << "sizeof(mans_name) = " << sizeof(mans_name) << endl;
    cout << "sizeof(womans_name) = " << sizeof(womans_name) << endl;

    Human first_man(mans_name, 25, true);
    Human first_woman(womans_name, 18, false);

    cout << "sizeof(Human) = " << sizeof(Human) << endl;
    cout << "sizeof(first_man) = " << sizeof(first_man) << endl;
    cout << "sizeof(first_woman) = " << sizeof(first_woman) << endl;

    return 0;
}
