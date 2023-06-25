#include <iostream>
using namespace std;

// Documentação: https://learn.microsoft.com/en-us/cpp/cpp/references-cpp?view=msvc-170
int main()
{
    // Wrong: string & badReference = NULL;
    string greeting = "Hi!";
    string &greetingReference = greeting;

    cout << greeting << "\t" << greetingReference << endl;

    string name = "Peter";
    greetingReference = name;

    cout << name << "\t" << greetingReference << "\t" << greeting << endl;
    cout << &name << "\t" << &greeting << "\t" << &greetingReference << endl;

    greetingReference.append("!!!!!!!");
    cout << greeting << endl;

    return 0;
}