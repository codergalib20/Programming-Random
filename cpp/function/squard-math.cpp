#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double number, squareRoot;

    number = 20.0;

    // sqrt() is a library function to calculate the square root;
    squareRoot = sqrt(number);
    cout << "Square root of " << number << " = " << squareRoot;
    return 0;
}