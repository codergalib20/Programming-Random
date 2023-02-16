#include <iostream>

using namespace std;

// class Employee
// {
// public:
//     string Name;
//     string Company;
//     int Age;

//     void introduction()
//     {
//         cout << "Name - " << Name << endl;
//         cout << "Company - " << Company << endl;
//         cout << "Age - " << Age << endl;
//     }
//     void setIntroduction(string name, string company, int age)
//     {
//         Name = name;
//         Company = company;
//         Age = age;
//     }
// };

// int main()
// {
//     Employee employee1;
//     // employee1.Name = "Galib";
//     // employee1.Company = "GBS soft";
//     // employee1.Age = 17;
//     //
//     // employee1.introduction();
//     employee1.setIntroduction("Asadullah", "GBS soft", 17);
//     employee1.introduction();
// }

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    // Custom function
    void introduction()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    // Constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    // Get single value
    string getName()
    {
        return Name;
    }
    string getCompany()
    {
        return Company;
    }
    int getAge()
    {
        return Age;
    }
};

int main()
{
    Employee employee1 = Employee("Galib", "Edive", 17);
    employee1.introduction();
}