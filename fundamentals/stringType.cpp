#include <cstdio>
#include <iostream>

using namespace std;


int main() {
    // https://cplusplus.com/reference/string/string/
    // How to declare a simple string
    string title = "Mr. ";
    string name("Alfredo");
    string end(10, '!');

    // show the size of string, last char, slice of string, print and concat. string
    cout << name.size() << endl;
    cout << name.back() << endl;
    cout << name[0] << endl;
    cout << end << endl;
    cout << title + name << endl;

    // Other way to concat. string
    string lastName("Morais");
    name += " ";
    name += lastName;
    cout << name << endl;
    name.append(end);

    return 0;
}