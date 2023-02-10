#include <iostream>

using namespace std;

class Student
{
public:
    int id;
    double cgpa;
};

int
main()
{
    Student Galib;

    Galib.id = 20;
    Galib.cgpa = 2.2;
    cout << Galib.id << " - " << Galib.cgpa << endl;

    Student Sakib;
    Sakib.id = 20;
    Sakib.cgpa = 2.2;
    cout << Sakib.id << " - " << Sakib.cgpa;
}