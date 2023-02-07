#include <iostream>

using namespace std;

void print_n(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    print_n(10);
}