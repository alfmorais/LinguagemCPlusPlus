#include <iostream>
using namespace std;

auto add = [](int x, int y) -> int { return x + y; };
auto sub = [](int x, int y) -> int { return x - y; };
auto mul = [](int x, int y) -> int { return x * y; };
// auto div = [](int x, int y) -> double { return x / y; };

int main()
{
    cout << add(10, 20) << endl;
    cout << sub(10, 20) << endl;
    cout << mul(10, 20) << endl;
    // cout << div(10, 20) << endl;
    return 0;
}