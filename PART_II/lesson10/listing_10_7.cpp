#include <iostream>
using namespace std;

class FishDummyMember {
    public:
        FishDummyMember() {
            cout << "FishDummyMember constructor" << endl;
        }

        ~FishDummyMember() {
            cout << "FishDummyMemver destructor" << endl;
        }
};

class Fish {
    protected:
        FishDummyMember dummy;

    public:
        Fish() {
            cout << "Fish constructor" << endl;
        }

        ~Fish() {
            cout << "Fish destructor" << endl;
        }
};

class Tuna : public Fish {
    public:
        Tuna() {
            cout << "Tuna constructor" << endl;
        }

        ~Tuna() {
            cout << "Tuna destructor" << endl;
        }
};

int main(int argc, char const *argv[])
{
    Tuna fish;
    
    return 0;
}
