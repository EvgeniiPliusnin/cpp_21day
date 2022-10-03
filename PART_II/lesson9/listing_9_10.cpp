#include <iostream>
#include <string>
using namespace std;

class President {
private:
    President() {}                  // private default constructor
    President(const President&);    // private copy constructor
    const President& operator=(const President&); // assignment operator
    
    string name;

public:
    static President& get_instance() {
        static President only_instance;
        return only_instance;
    }

    string get_name() {
        return name;
    }

    void set_name(string input_name) {
        name = input_name;
    }
};

int main(int argc, char const *argv[])
{
    President& only_president = President::get_instance();
    only_president.set_name("Abraham Lincoln");

    cout << "The name of the President is: ";
    cout << President::get_instance().get_name() << endl;
    // cout << only_president.get_name() << endl;    

    return 0;
}
