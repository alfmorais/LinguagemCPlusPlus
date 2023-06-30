#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    Person(string name = "Anonymous") {
        
    }

    string toString()
    {
        return this->name + " [" + this->email + "].";
    }
};

int main()
{
    return 0;
}