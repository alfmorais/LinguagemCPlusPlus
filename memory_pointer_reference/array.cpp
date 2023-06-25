#include <iostream>

using namespace std;

int main()
{
    // Index         0   1   2   3   4
    int values[] = {31, 44, 58, 91, 25};
    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;
    cout << values[3] << endl;
    cout << values[4] << endl;
    cout << sizeof values / sizeof values[0] << endl;

    return 0;
}