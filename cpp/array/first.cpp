#include <iostream>

int main()
{
    int count = 0;
    // int x[3][4] = {{1, 2, 3}, {5, 6, 7, 8}, {9}};
    // std::cout << x;
    int y[4] = {2,3,4,5};
    while(count <= 4) {
        std::cout << y[count] << std::endl;
        count++;
    }
}