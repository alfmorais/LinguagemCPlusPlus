#include <iostream>

using namespace std;

int main()
{
    for(int counter = 0; counter < 10; counter++)
    {
        cout << counter << endl;
    }

    for(int otherCounter = 100; otherCounter >= 0; otherCounter -= 2)
    {
        cout << otherCounter << endl;
    }

    return 0;
}