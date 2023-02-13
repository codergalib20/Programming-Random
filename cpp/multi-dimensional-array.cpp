#include <iostream>
#include <iomanip>
using namespace std;

const int STUDENTS = 4; // array dimension
const int GRADES = 3;

int main()
{
    int s, g;
    int grades[STUDENTS][GRADES]; // two dimensional array

    for (s = 0; s < STUDENTS; s++)
    {
        for (g = 0; g < GRADES; g++)
        {
            cout << "Enter grades for student ";
            cout << ", grade " << g + 1 << ": ";
            cin >> grades[s][g]; // places grade in array
        }
        cout << "\n\n Grade  \n";
        cout << "1 2 and 3";
        for (s = 0; s < STUDENTS; s++)
        {
            cout << "\nStudent " << s + 1;
            for (g = 0; g < GRADES; g++)
            {
                cout << setw(10) << grades[s][g];
            } // end grades loop
        }
    }
    return 0;
}