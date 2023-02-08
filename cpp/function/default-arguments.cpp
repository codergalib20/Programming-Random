// #include <iostream>

// using namespace std;

// int add(int x, int y, int z = 0)
// {
//     return x + y + z;
// }

// int main()
// {
// }

#include <iostream>

using namespace std;

int max(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a : (b > c ? b : c);
}

int main()
{
    cout << max() << endl;
    cout << max(15) << endl;
    cout << max(13, 15) << endl;
    cout << max(10, 13, 15) << endl;
    return 0;
}