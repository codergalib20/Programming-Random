#include <iostream>

using namespace std;

int main()
{
    // declear nested array
    int test[3][2] = {
        {2, -5},
        {4, 0},
        {9, 1}
    };

    // looping nested first array
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "test[" << i << "][" << "] = " << test[j][j] << endl;
        }
    }
    return 0;
}