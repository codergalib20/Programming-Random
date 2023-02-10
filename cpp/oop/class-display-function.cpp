#include <iostream>

using namespace std;

class Student
{
public:
    int id;
    double cgpa;

    void display()
    {
        cout << id << " - " << cgpa << endl;
    }
};

int main()
{
    Student Galib;
    Galib.cgpa = 4.5;
    Galib.id = 4343334;
    Galib.display();

    Student Nazmun;
    Nazmun.cgpa = 5.00;
    Nazmun.id = 3434343;
    Nazmun.display();
}