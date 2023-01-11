#include <iostream>

int main()
{
    int sum = 0, val;
    std::cout << "Give a input till whice hase be compile the loop : ";
    std::cin >> val;
    for (int i = 1; i <= val; i++)
    {
        sum += i;
    }
    std::cout << "Printed sum is 1 to " << val << " = " << sum;
    return 0;
}