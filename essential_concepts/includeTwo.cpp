#include <iostream>
#include "includes/include.h"

using namespace std;

int main()
{
    cout << "#include v2" << endl;
    cout << add(8, 8) << endl;
    return 0;
}

int add(int x, int y)
{
    return x + y;
}