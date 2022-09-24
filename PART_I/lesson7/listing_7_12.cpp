// lambda functins

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void display_numbs(vector<int>& dyn_array) {
    for_each(dyn_array.begin(), dyn_array.end(), \
        [] (int element) {cout << element << " ";});

    cout << endl;
}

int main(int argc, char const *argv[])
{
    vector<int> my_nums;
    my_nums.push_back(501);
    my_nums.push_back(-1);
    my_nums.push_back(25);
    my_nums.push_back(-35);
    
    display_numbs(my_nums);
    
    cout << "Sorting them descending order" << endl;

    sort(my_nums.begin(), my_nums.end(), \
        [] (int num1, int num2) {return (num2 < num1);}        
    );

    display_numbs(my_nums);
    
    return 0;
}
