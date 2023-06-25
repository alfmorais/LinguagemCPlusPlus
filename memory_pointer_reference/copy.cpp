#include <iostream>
using namespace std;

// Atribuição por cópia
int main(){
    // assignment copies the values
    int a = 2;
    int b = a;

    a++;
    b--;

    cout << a << endl;
    cout << b << endl;

    return 0;
}