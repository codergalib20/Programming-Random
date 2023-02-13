#include <iostream>

using namespace std;

const int SIZE = 4;

struct carpart
{
    int sku;
    int partnum;
    float cost;
};

int main()
{
    int n;
    carpart parts[SIZE];
    for (n = 0; n < SIZE; n++)
    {
        cout << "\nEnter sku: ";
        cin >> parts[n].sku;
        cout << "\nEnter part number: ";
        cin >> parts[n].partnum;
        cout << "\nEnter cost: ";
        cin >> parts[n].cost;
    }

    for (n = 0; n < SIZE; n++)
    {
        cout << "\nSKU " << parts[n].sku << endl;
        cout << "\nPart Number " << parts[n].partnum << endl;
        cout << "\nCost " << parts[n].cost << endl;
    }

    return 0;
}