#include <iostream>

using namespace std;

// void numSwap(int &num1, int &num2);
void numSwap(int *, int *);

int main()
{
    int x = 10;
    int y = 5;

    cout << "Numbers before swap:\n";
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;

    // call Swap function
    // numSwap(x, y); // function using dereference
    numSwap(&x, &y); // call Swaping function by pointers
    return 0;
}

// void numSwap(int &num1, int &num2)
// {
// int temp;
// temp = num1;
// num1 = num2;
// num2 = temp;
// cout << "X = " << num1 << endl;
// cout << "Y = " << num2 << endl;
// }
void numSwap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    cout << "X = " << *num1 << endl;
    cout << "Y = " << *num2 << endl;
}