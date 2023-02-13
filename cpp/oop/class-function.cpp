#include <iostream>

using namespace std;

class Student
{
public:
    int name;
    double old;

   void display()
    {
        cout << "My name is " << name << " I am " << old << endl;
    };
   void valueSet(int n, double y)
    {
        name = n;
        old = y;
    };
};

int
main()
{
    Student Galib;
    Galib.valueSet(3,3);
    Galib.display();
}