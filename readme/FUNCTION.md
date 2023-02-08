## Function

- [Introduction]()
- [Function Overloading]()
- [Return Type]()
- [Parameters]()
- [Function Template]()
- [Default Arguments]()
- [Pass by Value]()
- [Pass by Address]()
- [Pass by Reference]()
- [Return by Address]()
- [Local and Global Variables]()
- [Demo Scoping Rule]()
- [Static Variable]()
- [Recursive Function]()
- [Exercise]()

<!-- ------------Function Template----------- -->

### Function Template

```
#include <iostream>

using namespace std;

template <class T>

T maxim(T a, T b)
{
    return a > b ? a : b;
}

// int maxim(int a, int b)
// {
//     return a > b ? a : b;
// }

// float maxim(float a, int b)
// {
//     return a > b ? a : b;
// }

int main()
{
    cout << maxim(12, 14) << endl;
    cout << maxim(2.3, 5.4) << endl;
    cout << maxim(3.4f, 4.5f) << endl;
    return 0;
}
```

<!-- ------------Function Overloading----------- -->

### Function Overloading

```
#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << sum(4, 5) << endl;
    cout << sum(5.4f, 3.4f) << endl;
    cout << sum(5, 4, 3) << endl;
}
```

<!-- ------------Function Template----------- -->
<!-- ------------Function Template----------- -->
<!-- ------------Function Template----------- -->
