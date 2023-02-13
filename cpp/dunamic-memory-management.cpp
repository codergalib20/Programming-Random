#include <iostream>

using namespace std;

int main()
{

    int arraySize;
    int *arr = new int[arraySize];

    cout << "Enter the size of the array: ";
    cin >> arraySize;

    cout << "\nEnter the array elements: ";

    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }

    cout << "\nThe elements you've entered are: ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << ", ";
    }
    // int *ptr;
    // ptr = new int;
    // float * floatPrt = new float;

    // double *doublePtr = new double(14.27);

    // int *arr = new int[10]; // array

    // delete ptr;
    // delete floatPtr;
    // delete doublePtr;
    // delete arr;

    return 0;
}