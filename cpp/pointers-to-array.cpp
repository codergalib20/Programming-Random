#include <iostream>

using namespace std;

int main()
{
    float arr[5];
    float *ptr;

    for (int i = 0; i < 5; ++i)
    {
        cout << "&arr[ " << i << "] = " << &arr[i] << endl;
    }

    ptr = arr;

    cout << "\nDisplaying memory address using pointers: " << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }

    return 0;
}