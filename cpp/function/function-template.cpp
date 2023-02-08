#include <iostream>

using namespace std;

template <class T>

T maxim(T a, T b)
{
    return a > b ? a : b;
}

// int maxim(int a, int b)
// {
//     return a > b ? a : b;
// }

// float maxim(float a, int b)
// {
//     return a > b ? a : b;
// }

int main()
{
    cout << maxim(12, 14) << endl;
    cout << maxim(2.3, 5.4) << endl;
    cout << maxim(3.4f, 4.5f) << endl;
    return 0;
}