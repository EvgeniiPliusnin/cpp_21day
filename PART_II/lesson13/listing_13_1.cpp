#include <iostream>

class Fish {
    public:
        virtual void swim() {
            std::cout << "Fish swims in water" << std::endl;
        }

        virtual ~Fish() {}
};

class Tuna : public Fish {
    public:
        void swim() {
            std::cout << "Tuna swims real fast in the sea" << std::endl;
        }

        void become_dinner() {
            std::cout << "Tuna become dinner in Sushi" << std::endl;
        }
};

class Carp : public Fish {
    public:
        void swim() {
            std::cout << "Carp swims real slow in the lake" << std::endl;
        }

        void talk() {
            std::cout << "Carp talked Carp!" << std::endl;
        }
};

void detect_fish_type (Fish* obj_fish) {
    Tuna* obj_tuna = dynamic_cast <Tuna*>(obj_fish);
    if(obj_tuna) { // check success of cast
         std::cout << "Detected Tuna. Making Tuna dinner: " << std::endl;
         obj_tuna -> become_dinner();
    }

    Carp* obj_carp = dynamic_cast <Carp*> (obj_fish);
    if(obj_carp) {
        std::cout << "Detected Carp. Making Carp talk: " << std::endl;
        obj_carp -> talk();
    }

    std::cout << "Verifying type using virtual Fish::swim: " << std::endl;
    obj_fish -> swim(); // calling virtual function swim()
}

int main(int argc, char const *argv[])
{
    Carp my_lunch;
    Tuna my_dinner;

    detect_fish_type(&my_lunch);
    std::cout << std::endl;
    detect_fish_type(&my_dinner);

    return 0;
}
