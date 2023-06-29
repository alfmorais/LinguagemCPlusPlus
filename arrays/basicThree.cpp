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

    cout << "Foreach..." << endl;
    for (string name : names)
    {
        string message = "Olá " + name;
        cout << message << endl;
    }
        
    for (auto const &name : names)
    {
        string message = "Olá " + name;
        cout << message << endl;
    }

    cout << "Reference Foreach..." << endl;
    for (string &name : names)
    {
        name.append(".");
        string message = "Olá " + name;
        cout << message << endl;
    }
    cout << endl;
    cout << names[0] << endl;

    return 0;
}