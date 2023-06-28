#include <iostream>

using namespace std;

void funcOne()
{
    int x = 3;
}

int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

double add(double x, int y)
{
    return x + y + 1000;
}

int main()
{
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30) << endl;
    cout << add(1.0, 20) << endl;
    return 0;
}
