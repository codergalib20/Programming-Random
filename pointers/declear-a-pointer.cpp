#include <iostream>

using namespace std;


int main () {
    int value = 200;
    int * pval  = &value;

   cout << *pval << endl << value << endl;
   cout << pval << endl << value;
}