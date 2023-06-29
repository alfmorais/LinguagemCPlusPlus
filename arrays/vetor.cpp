#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3};
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(8);
    numbers.push_back(9);

    for (int number : numbers)
    {
        cout << number << " ";
    }

    for (auto index = numbers.rbegin(); index != numbers.crend(); index++)
    {
        cout << *index << endl;
    }

    vector<int> secondNumbers;
    secondNumbers.assign(10, 1);
    secondNumbers.push_back(7896);
    secondNumbers.erase(secondNumbers.begin() + 7);

    for (int number : secondNumbers)
    {
        cout << number << " ";
    }
    return 0;
}