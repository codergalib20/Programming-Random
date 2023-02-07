#include <stdio.h>

// int main()
// {
// int n;
// scanf("%d", &n);
//
// int sum = 0;
// for (int i = 1; i <= n; i++)
// {
// sum += i;
// }
// printf("%d", sum);
// }

void printTraingularNumber(int k)
{
    int sum = 0;

    for (int i = 1; i <= k; i++)
    {
        sum += i;
    }
    printf("%d th traingular number is %d\n", k, sum);
}

int main()
{
    int n;
    scanf("%d", n);

    printTraingularNumber(n);
}