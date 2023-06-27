#include <iostream>

using namespace std;

void increment(int value)
{
    value++;
}


// Always use reference to change de value
void incrementReference(int &value)
{
    value++;
    value++;
    value++;
}

int main()
{
    int valueX = 1;

    increment(valueX);
    cout << valueX << endl;

    incrementReference(valueX);
    cout << valueX << endl;

    return 0;
}