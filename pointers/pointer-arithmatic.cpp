#include <iostream>

using namespace std;

int main()
{
    char ch = 'a';
    int n = 100;
    char *pch = &ch;
    int *pn = &n;

    cout << *pch << endl;
    cout << pch << endl;
    cout << *pn << endl;
    cout << pn << endl;
}