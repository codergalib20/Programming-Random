#include <iostream>

using namespace std;

int main()
{
    int arr[8] = {3, 4, 5, 6, 22, 44, 3, 4};
    int num = 7, max = 0, count = 0;
    while (count < num)
    {
        if (arr[count] > max)
        {
            max = arr[count];
        }
        count++;
    }
    cout << "The max number is: " << max << endl;
}