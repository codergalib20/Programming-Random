#include <iostream>

using namespace std;

int main()
{
    int arr[7] = {4, 8, 6, 9, 5, 2, 7};

    int num = 7, sum = 0;
    int count = 0;

    while (count < num)
    {
        sum = sum + arr[count];
        // cout << "" << sum << arr[count] << ", ";
        cout << count << endl;
        count++;
    }
    cout << "The sum is : " << sum << endl;
}