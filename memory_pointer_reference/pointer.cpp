#include <iostream>

using namespace std;

int main()
{
    /*
        What is a pointer?
        ---------------------------------------
        Pointer is a variable whose vale is
        the address of another variable, i.e.,
        direct address of the memory location.
    */
    int value = 98765;
    int &referenceValue = value;
    int *pointerValue = &value;

    cout << value << "\t" << referenceValue << "\t" << *pointerValue << endl;
    cout << &value << "\t" << &referenceValue << "\t" << pointerValue << endl;

    return 0;
}