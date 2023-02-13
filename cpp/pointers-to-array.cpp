#include <iostream>

using namespace std;

int main () {
    float arr[5];
    float *ptr;

    for(int i = 0; i < 5; ++i) {
        cout << "&arr[ " << i << "] = " << &arr[i] << endl; 
    }

    return 0;
}