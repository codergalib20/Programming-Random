#include <iostream>

int main()
{
    int count = 1, sum = 0, val;
    std::cout << "Give a number tat will be end of the loop : ";
    std::cin >> val;
    while (count <= val)
    {
        sum = sum + count;
        count = count + 1;
    }
    std::cout << "The total number of summenation 1 to " << val << " = " << sum << std::endl;
    return 0;
}