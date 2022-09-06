#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int three_rows_three_columns [3][3] = {
        {-501, 205, 2016}, 
        {989, 101, 206},
        {303,456, 596}
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "Row " << i << ": ";
        for (int j = 0; j < 3; j++)
        {
            cout << three_rows_three_columns[i][j] << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}
