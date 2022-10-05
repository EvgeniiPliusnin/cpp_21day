#include <iostream>

class Fish {
    public:
        Fish() {
            std::cout << "Constructed Fish" << std::endl;
        }

        ~Fish() {
            std::cout << "Destroyed Fish" << std::endl;
        }
};

class Tuna : public Fish {
    public:
        Tuna() {
            std::cout << "Constructed Tuna" << std::endl;
        }

        ~Tuna() {
            std::cout << "Destroyed Tuna" << std::endl;
        }
};

void delete_fish_memory(Fish* p_fish) {
    delete p_fish;
}

int main(int argc, char const *argv[])
{
    std::cout << "Allocating a Tuna on the free store:" << std::endl;
    Tuna* p_tuna = new Tuna;
    std::cout << "Deleting the Tuna: " << std::endl;
    delete_fish_memory(p_tuna);

    std::cout << std::endl << "Instatiating a Tuna on the stack: " << std::endl;
    Tuna my_dinner;
    std::cout << "Automatic destruction as it goes out of scope: " << std::endl;

    return 0;
}
