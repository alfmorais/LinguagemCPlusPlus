#include <iostream>
#include "functionTwo.h"

using namespace std;

// Function Prototype or Declaration of Function
// void log(int number, bool newLine);

int main()
{
    log(3, false);
    log(4, false);
    log(5, false);
    log(6, true);
    log(7, true);
    log(8, true);
    return 0;
}

void log(int number, bool newLine)
{
    cout << "Number: " << number;
    newLine ? cout << endl : cout << " ";
}