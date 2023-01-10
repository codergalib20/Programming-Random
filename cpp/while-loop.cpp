#include <iostream>

int main()
{
    int count = 1;

    while (count <= 10)
    {
        std::cout << "Counted " + count << std::endl;
        count = count + 1;
    }
}