#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int input[100];

    for (int i = 0; i < n; i++)
    {
        std::cin >> input[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << input[i] << std::endl;
    }
}