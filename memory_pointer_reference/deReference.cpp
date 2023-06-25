#include <iostream>
using namespace std;

// Documentação: https://learn.microsoft.com/en-us/cpp/cpp/references-cpp?view=msvc-170
int main()
{
    double pi = 3.14;
    double &piReference = pi;

    cout << piReference << endl;
    cout << &pi << endl;

    // * -> DeReference Operator
    // * is used to create a pointer!
    // Think of as "Get Value at..."
    cout << *&pi << endl;
    cout << &*&*&pi << endl;

    return 0;
}