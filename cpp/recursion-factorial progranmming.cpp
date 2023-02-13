#include <iostream>

using namespace std;

unsigned long Factorial(unsigned long); // declaration

int main()
{
    int n;
    unsigned long fact; // factorial
    cout << "Enter a number: ";
    cin >> n;
    fact = Factorial(n);
    cout << "Factorial of " << n << " is " << fact << endl;

    return 0;
}

unsigned long Factorial(unsigned long n)
{
    if (n > 1)
    {
        return n * Factorial(n - 1);
    }
    else
    {
        return 1;
    };
}