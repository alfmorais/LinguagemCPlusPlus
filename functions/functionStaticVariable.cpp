#include <iostream>

using namespace std;

// int id = 1;

int nextId()
{
    static int id = 1;
    return id++;
}

int main()
{
    cout << nextId() << endl;
    cout << nextId() << endl;
    cout << nextId() << endl;
    cout << nextId() << endl;
    cout << nextId() << endl;
    cout << nextId() << endl;
    return 0;
}