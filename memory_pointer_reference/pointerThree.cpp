#include <iostream>

using namespace std;

int main()
{
    int array[] = {47, 33, 72, 13, 88};
    int *pointer = &array[0];

    cout << pointer << endl;
    cout << *pointer << endl;
    pointer++;

    cout << pointer << endl;
    cout << *pointer << endl;

    return 0;
}