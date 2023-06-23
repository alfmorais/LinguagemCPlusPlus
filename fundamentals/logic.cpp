#include <cstdio>
#include <iostream>

using namespace std;


int main()
{
    double finalGrade;
    bool goodBehavior;

    cout << "Enter the final grade: ";
    cin >> finalGrade;

    cout << "Is he/she well-behaved? ";
    cin >> goodBehavior;

    bool goodStudent = (finalGrade >= 9) && goodBehavior;
    bool averageStudent = (finalGrade >=8) ^ goodBehavior;
    bool badStudent = (finalGrade <= 3) && !goodBehavior;
    bool loanCancelled = (finalGrade <=3) || !goodBehavior;

    cout << "Good Student? " << goodStudent << endl;
    cout << "Average Student? " << averageStudent << endl;
    cout << "Bad Student? " << badStudent << endl;
    cout << "Will the loan be cancelled? " << loanCancelled << endl;

    // AND (&&) | OR (||) | XOR (^ !=) | NOT (!)
    cout << "AND (&&)..." << endl;
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;
    cout << "OR (||)..." << endl;
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;
    cout << "XOR (!=)..." << endl;
    cout << (true != true) << endl;
    cout << (true != false) << endl;
    cout << (false != true) << endl;
    cout << (false != false) << endl;
    cout << "NOT (!)..." << endl;
    cout << (!true) << endl;
    cout << (!false) << endl;
    return 0;
}