#include <cstdio>
#include <iostream>

using namespace std;


int main()
{
    // Relation Operation
    int x;

    cout << "Enter a number: ";
    cin >> x;

    printf("%d > 10 -> %d.\n", x, x > 10);
    printf("%d >= 10 -> %d.\n", x, x >= 10);
    printf("%d < 10 -> %d.\n", x, x < 10);
    printf("%d <= 10 -> %d.\n", x, x <= 10);
    printf("%d == 10 -> %d.\n", x, x == 10);
    printf("%d != 10 -> %d.\n", x, x != 10);

    return 0;
}