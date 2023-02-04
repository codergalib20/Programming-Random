#include <iostream>

using namespace std;

int main()
{
    int key, count = 0, num = 7;
    int arr[7] = {4, 6, 7, 45, 343, 22, 12};
    cin >> key;
    while (count < num)
    {
        if (key == arr[count])
        {
            cout << "Key found at: " << count + 1 << endl;
            return 0;
        }
        count ++;
    }
    cout << "Key not found!";
}