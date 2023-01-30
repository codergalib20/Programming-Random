#include <iostream>

using namespace std;

int main () {
    int number;
    int sum = 0;

    // nested loop

    // first loop 
    for (int i = 1;i<=6; i++){
        // second loop
        for(int j =1;j<=6; j++){
            if(i == 4) {
                break;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
}