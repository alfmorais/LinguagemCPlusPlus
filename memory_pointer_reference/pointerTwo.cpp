#include <iostream>

using namespace std;

int main()
{
    int *pointer = nullptr;
    int *secondPointer;

    int valueX = 5;
    int valueY = 10;

    pointer = &valueX;
    cout << *pointer << endl;

    pointer = &valueY;
    cout << *pointer << endl;

    secondPointer = pointer;
    cout << secondPointer << endl;
    cout << pointer << endl;

    return 0;
}