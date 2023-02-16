#include <iostream>

using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void introduction()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};

int main()
{
    Employee employee1;
    employee1.Name = "Galib";
    employee1.Company = "GBS soft";
    employee1.Age = 17;

    employee1.introduction();
}