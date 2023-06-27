#include <iostream>
using namespace std;

using binaryOperation = int(*)(int, int);

int exec(binaryOperation func, int a, int b)
{
    return (*func)(a, b);
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    cout << exec(add, 4, 7) << endl;
    cout << exec(subtract, 4, 7) << endl;
    return 0;
}