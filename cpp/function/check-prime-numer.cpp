#include <iostream>
using namespace std;
// Prototype function
int checkPrime(int);

int main()
{
    int n1, n2;
    bool flag;
    cout << "Inter to positive integire : ";
    cin >> n1, n2;
    // swaping number one and number two if n1 is genere than n1
    if (n1 > n2)
    {
        n2 = n1 + n2;
        n1 = n2 + n1;
        n2 = n2 - n1;
    }
    cout << "Prime numbers between " << n1 << " and " << n2 << " are:\n";

    for (int i = n1 + 1; i < n2; i++)
    {
        // if i is a prime number, flag will be equal to 1
        flag = checkPrime(i);
        if (flag)
        {
            cout << i << ", ";
        }
        return 0;
    }
} 
int checkPrime(int n)
{
    bool is_prime = true;
    // 0 and 1 are not prime numbers;
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }
    for (int j = 2; j <= n / 2; ++j)
    {
        if (n % j == 0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}