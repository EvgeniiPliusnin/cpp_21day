#include <iostream>
using namespace std;

class MonsterDB {
private:
    ~MonsterDB() {}; // private destructor prevents instances on stack 

public:
    static void destroy_instance(MonsterDB* p_Instance) {
        delete p_Instance; // member can invoke private destructor
    }

    void do_something() {

    }
};

int main(int argc, char const *argv[])
{
    MonsterDB* my_db = new MonsterDB();  // on heap
    my_db ->do_something();

    MonsterDB::destroy_instance(my_db);

    return 0;
}


