#define ZERO 0
#define SQUARE(X) X * X
#include <iostream>

using namespace std;

int main()
{
    #ifdef SQUARE
        cout << SQUARE(2) << endl;
        cout << SQUARE(10) << endl;
    #else
        cout << "else..." << endl;
    #endif

    return ZERO;
}