#include <iostream>

using namespace std;

int main()
{
    // array declaration
    int age[3]; // array 'age' of 2 integers
    int grades[] = {86, 91, 96, 78};
    const int SIZE = 5;
    int average = 0;
    int total = 0;

    for (int i = 0; i < SIZE; i++)
    {
        total += grades[i];
        average = total / SIZE;
        cout << " The average grade us " << average << endl;
    }

    // user prompt
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an age: ";
        cin >> age[i]; // acces indivudual array element;
    }

    for (int j = 0; j < 3; j++)
    {
        cout << "You entered: " << age[j] << endl;
    }
}