#include <iostream>

using namespace std;


int main () {
    int x = 10;
    int *p = &x;

    // Printing
    cout << x << endl;
    cout << &x << endl;
    cout << *p << endl;
    cout << p << endl;
    cout << &p << endl;
}