#include <iostream>

using namespace std;

void funcOne()
{
    cout << "exec..." << endl;
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