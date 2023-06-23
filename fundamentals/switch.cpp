#include <iostream>

using namespace std;

int main()
{
    int month;
    int numberOfDays;

    cout << "Enter a month: ";
    cin >> month;

    switch (month)
    {
    case 2:
        numberOfDays = 28;
        break;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        numberOfDays = 31;
        break;
    case 4: case 6: case 9: case 11:
        numberOfDays = 30;
        break;
    default:
        numberOfDays = -1;
    }

    cout << numberOfDays << " days" << endl;

    return 0;
}
