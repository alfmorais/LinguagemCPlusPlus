#include <iostream>

using namespace std;

int main()
{
    string names[5] = {"Alfredo", "Joaquim", "Denise", "José Antônio", "Bruce Wayne"};
    int size = sizeof names / sizeof names[0];

    for (int index = 0; index < size; index++)
    {
        cout << names[index] << endl;
    }

    return 0;
}