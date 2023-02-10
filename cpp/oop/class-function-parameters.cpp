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
    void setData(double y, int x)
    {
        id = x;
        cgpa = y;
    }
};

int main()
{
    Student Galib, Nazmun;
    Galib.setData(4.5, 4343334);
        Galib.display();

    Nazmun.setData(5.00, 3434343);
        Nazmun.display();
}