#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {6, 7, 8, 12, 14, 17, 18, 22, 20, 56};
    int low = 0, hig = 9, mid,key;

    cout << "Enter the key : ";
    cin >> key;

    while (low < hig)
    {
        mid = (low + hig) / 2;
        if (key == arr[mid])
        {
            cout << "Found at: " << mid;
            return 0;
        }
        else if (key < arr[mid])
            hig = mid - 1;
        else
            low = mid + 1;
    }
    cout << "Not found!";
}