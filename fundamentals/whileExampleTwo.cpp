#include <iostream>

using namespace std;

int main()
{
    int counter = 0;

    while(counter < 10)
    {
        cout << counter << endl;
        counter++;
    }

    int otherCounter = 100;

    while(otherCounter >= 0)
    {
        cout << otherCounter << endl;
        otherCounter -= 2;
    }

    return 0;
}