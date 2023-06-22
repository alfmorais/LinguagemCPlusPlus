#include <cstdio>
#include <iostream>

using namespace std;


int main() {
    // Material and Link of reference:
    // https://pt.cppreference.com/w/cpp/language/types
    // https://www.geeksforgeeks.org/c-data-types/

    bool isAdmin = true;
    bool isSuperUser = false;
    cout << isAdmin << endl;
    cout << isSuperUser << endl;

    // Must be '' not "".
    char symbol = '#';
    char sinal('@');
    cout << symbol << endl;
    cout << sinal << endl;

    // Numbers int, float and decimal
    unsigned short int age = 31;
    signed short int value = 1000;
    float pi = 3.14; // 32 bits
    const double PI = 3.1415; // 64 bits
    cout << age << endl;
    cout << value << endl;
    cout << pi << endl;
    cout << PI << endl;

    // datatype modifies and signed unsigned long
    short int n1 = 1;
    long int n2 = 1;
    unsigned int n3 = 1;
    long long int n4 = 1;
    cout << n1 + n2 + n3 + n4 << endl;

    // check size of datatypes
    cout << sizeof(char) << " Byte" << endl;
    cout << sizeof(wchar_t) << " Byte(s)" << endl;
    cout << sizeof(char16_t) << " Byte(s)" << endl;
    cout << sizeof(char32_t) << " Byte(s)" << endl;
    cout << sizeof(int) << " Byte(s)" << endl;
    cout << sizeof(long int) << " Byte(s)" << endl;
    cout << sizeof(long long int) << " Byte(s)" << endl;
    cout << sizeof(float) << " Byte(s)" << endl;
    cout << sizeof(double) << " Byte(s)" << endl;

    return 0;
}