#include <iostream>
#include <vector>

using namespace std;

vector<int> map(vector<int> v, int (*fn)(int))
{
    vector<int> newVector;

    for (auto element : v)
    {
        newVector.push_back((*fn)(element));
    }
    return newVector;

}

int main()
{
    auto square = [](int x)
    { return x * x; };

    vector<int> numbers = {2, 5, 8, 23, 56};
    vector<int> squares = map(numbers, square);

    // for (auto number : numbers)
    // {
    //     squares.push_back(square(number));
    // }

    for (auto square : squares)
    {
        cout << square << endl;
    }

    return 0;
}