#include <iostream>

using namespace std;

const double PI = 3.141592;

void funcOne()
{
    cout << "exec..." << endl;
    cout << PI << endl;
}

void funcTwo()
{
    funcOne();
}

void funcThree()
{
    funcTwo();
}

int main()
{
    funcThree();
}