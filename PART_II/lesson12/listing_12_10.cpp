#include <iostream>
#include <string>

class Display {
    public:
        void operator () (std::string arg) const {
            std::cout << arg << std::endl;
        }
};

int main(int argc, char const *argv[])
{
    Display dispaly_test;
    dispaly_test ("display this text");

    return 0;
}
