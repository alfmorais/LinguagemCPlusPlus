#include <iostream>
using namespace std;

class Date
{
public:
    int day;
    int month;
    int year;

    // Standard Constructor
    Date()
    {
        day = 1;
        month = 1;
        year = 1970;
    }
};


int main()
{
    Date date;
    // date.day = 1;
    // date.month = 1;
    // date.year = 1970;

    cout << date.day << "/" << date.month << "/" << date.year << endl;
    return 0;
}