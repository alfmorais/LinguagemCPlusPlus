#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    double numberOne;
    double numberTwo;
    double numberThree;

    cout << "Enter the first number: ";
    cin >> numberOne;

    cout << "Enter the second number: ";
    cin >> numberTwo;

    cout << "Enter the third number: ";
    cin >> numberThree;

    bool firstCondition = numberOne > numberTwo;
    bool secondCondtion = numberOne > numberThree;
    bool thirdCondition = numberTwo > numberThree;

    if (firstCondition && secondCondtion)
    {
        cout << "The higher number is: " << numberOne << endl;
    }

    if (!firstCondition && thirdCondition)
    {
        cout << "The higher number is: " << numberTwo << endl;
    }

    if (!thirdCondition && !secondCondtion)
    {
        cout << "The higher number is: " << numberThree << endl;
    }
    return 0;
}