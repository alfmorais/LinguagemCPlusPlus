#include <iostream>
using namespace std;

// Documentação: https://learn.microsoft.com/en-us/cpp/cpp/references-cpp?view=msvc-170
int main()
{
    /*
        Why not "int& xReference = &x;"
        --------------------------------------------
        At compile time all instances of xReference
        are replaced with the address of 'x'
    */
    int x = 10;
    int &xReference = x;

    cout << x << "\t" << &x << endl;
    cout << xReference << "\t" << &xReference << endl;

    x++;

    cout << x << "\t" << &x << endl;
    cout << xReference << "\t" << &xReference << endl;

    x--;

    cout << x << "\t" << &x << endl;
    cout << xReference << "\t" << &xReference << endl;

    return 0;
}