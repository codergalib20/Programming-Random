#include <iostream>

using namespace std;

// same name different argements
// int test() {}
// int test(int a) {}
// float test(double a) {}
// int test(int a, double b) {}

// function with float type parameter
float absolute(float var)
{
    if (var < 0.0)
        var = -var;
    return var;
}

// function with int type parameter
int abslute(int var)
{
    if (var < 0)
    {
        var = -var;
    }
    return var;
}

int main()
{
    // call function with int type parameter
    cout << "Absolute value of -5 = " << absolute(-5) << endl;

    // call function with float type parameter
    cout << "Absolute value of 5.5 = " << absolute(4.4f) << endl;
    return 0;
}