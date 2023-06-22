#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    // Type Inference
    auto a = 1;
    auto b = 1.2;
    auto c = false;

    cout << typeid(a).name() << endl
         << typeid(b).name() << endl
         << typeid(c).name() << endl;

    return 0;
}