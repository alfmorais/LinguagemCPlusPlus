#include <iostream>

using namespace std;

int main()
{
    string abc = "abcdefghijklmnopqrstuvwyz";
    cout << abc[9] << endl;

    for (char charctere: abc){
        cout << charctere << ", " << endl;
    }

    return 0;
}