#include <iostream>

int main()
{
    int count = 1, sum = 0;

    while (count <= 10)
    {
        sum = sum + count;
        std::cout
            << "Counted " << count << "And the sum is = " << sum << std::endl;
        count = count + 1;
    }
    return 0;
}