#include <iostream>

class Fish {
    public:
        Fish() {
           std::cout << "Constructed Fish" << std::endl; 
        }

        virtual ~Fish() {
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
    Tuna* p_tuna = new Tuna;
    delete_fish_memory(p_tuna);
    std::cout << "************" << std::endl;
    Tuna my_dinner;

    return 0;
}
