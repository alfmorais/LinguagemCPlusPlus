#include <iostream>
using namespace std;

// Documentação: https://learn.microsoft.com/en-us/cpp/cpp/references-cpp?view=msvc-170
int main(){
    int a = 10;
    cout << a << endl;
    cout << a << "\t" << &a << endl;

    // '&' indica a posição da memória.
    string name = "Alfredo";
    cout << name << "\t" << &name << endl;

    return 0;
}