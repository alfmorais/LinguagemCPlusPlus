#include <iostream>
using namespace std;

class Actor
{
public:
    string name;
    string email;

    Actor() : Actor("Anonumous") {}

    Actor(string name, string email = "-")
    {
        // (*this).name = name;
        // (*this).email = email;
        this->name = name;
        this->email = email;
    }

    string toString()
    {
        return name + " [" + email + "].";
    }
};

int main()
{
    Actor actorOne = Actor("Steve", "carell@office.com");
    Actor actorTwo;
    cout << actorOne.toString() << endl;
    cout << actorTwo.toString() << endl;

    return 0;
}