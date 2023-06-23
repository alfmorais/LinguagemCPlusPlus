#include <iostream>

using namespace std;

int main()
{
    double number = 0;
    double total = 0;
    double quantity = 0;
    double average;

    // Infinite loop stoped by user.
    for (; number != -1;)
    {
        cout << "Enter a number or -1 to finish: ";
        cin >> number;

        if (number != -1)
        {
            total += number;
            quantity++;
        }
    }

    // Cast Example:
    // double average = ((double) total) / quantity
    average = total / quantity;

    cout << average << endl;
    cout << total << endl;

    return 0;
}