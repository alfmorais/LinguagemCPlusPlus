#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    // binary and infix
    cout << 2 + 2 << endl;
    cout << 2 - 2 << endl;
    cout << 2 * 2 << endl;
    cout << 2 / 2 << endl;
    cout << 10 % 3 << endl;
    cout << 10 + 3 * 5 << endl;

    int x;
    int y;

    cout << "Enter a number: ";
    cin >> x;

    cout << "Enter a number: ";
    cin >> y;

    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl;
    cout << x + y * 5 << endl;

    return 0;
}