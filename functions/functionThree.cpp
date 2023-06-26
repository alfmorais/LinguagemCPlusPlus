#include <iostream>

using namespace std;

int max(int numberOne, int numberTwo)
{
    return numberOne >= numberTwo ? numberOne : numberTwo;
}

int main()
{
    int numberOne, numberTwo, numberThree;

    cout << "Enter the first number: ";
    cin >> numberOne;
    cout << "Enter the second number: ";
    cin >> numberTwo;
    cout << "Enter the third number: ";
    cin >> numberThree;

    cout << "Max: " << max(numberOne, max(numberTwo, numberThree)) << endl;
}