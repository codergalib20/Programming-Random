#include <iostream>
#include <sstream>

using namespace std;

struct books
{
    string title;
    int year;
};

int
main()
{
    string userInput;

    books book1;
    books *book1P;
    book1P = &book1;

    cout << "Enter book title: ";

    getline(cin, book1P->title);
    cout << "Enter the year it was published: ";
    getline(cin, userInput);
    (stringstream) userInput << book1P->year;

    cout << "\nYou have entered: \n";
    cout << book1P->title;
    cout << " (" << book1P->year << ")\n";

    return 0;
}