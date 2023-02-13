#include <iostream>

using namespace std;

struct product
{
    int quantity;
    double price;
    string name;
} p2, p3;

int main()
{
    product p1;

    p1.price = 2.45;
    p1.quantity = 4;
    p1.name = "Potato";

    p2.price = 3.45;
    p2.quantity = 6;
    p2.name = "Orange";

    p3.price = 1.45;
    p3.quantity = 2;
    p3.name = "Apple";

    cout << "The cost of potato: " << p1.price * p1.quantity << endl;
    cout << "The cost of potato: " << p2.price * p2.quantity << endl;
    cout << "The cost of potato: " << p3.price * p3.quantity << endl;

    return 0;
}