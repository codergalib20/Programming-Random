#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << sum(4, 5) << endl;
    cout << sum(5.4f, 3.4f) << endl;
    cout << sum(5, 4, 3) << endl;
}