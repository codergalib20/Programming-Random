#include <iostream>

using namespace std;

void greet(int one, int two);

int main()
{
    greet(20, 30);
}

void greet(int one, int two)
{
    cout  << (one + two) << endl;
}