#include <cstdio>
#include <iostream>

using namespace std;


int main()
{
    // Atribuição condicional
    bool sunny = false;

    // exp(T/F) ? T : F
    string result = sunny ? ":)" : ":(";

    cout << result << endl;

    double balance = 1234.55;
    double value;
    cout << "Enter the value: ";
    cin >> value;

    char creditOrDebit;
    cout << "Enter the operation C (credit) or D (debt): ";
    cin >> creditOrDebit;

    cout << "Balance [Before]: " << balance << endl;

    balance += creditOrDebit == 'c' ? value : -value;

    cout << "Balance [After]: " << balance << endl;

    return 0;
}