#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    double finalGrade;
    cout << "Enter the final grade: ";
    cin >> finalGrade;

    if (finalGrade >= 7)
    {
        cout << "Excellent grade." << endl;
        cout << "Congrulations!" << endl;
    }
    else
    {
        cout << "Needs to improve!" << endl;
    }

    return 0;
}