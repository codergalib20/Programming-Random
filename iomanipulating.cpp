#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << left;
    cout << setw(11) << "Spring"
         << setw(10) << "Nice" << endl
         << setw(10) << "Summer"
         << setw(10) << "Hot";
    return 0;
}