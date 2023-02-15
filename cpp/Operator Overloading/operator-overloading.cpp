#include <iostream>

using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.real = 10;
    c1.img = 5;

    c3 = c1.add(c3);
    cout << c3.real << "+1" << c3.img << endl;
}