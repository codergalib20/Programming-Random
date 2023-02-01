#include <iostream>

using namespace std;

// same name different argements
int test() {}
int test(int a) {}
float test(double a) {}
int test(int a, double b) {}

int main()
{

    return 0;
}