#include <iostream>
using namespace std;

class Actor
{
public:
    string name;
    string email;

    Actor(string name = "Anonymous", string email = "???")
        : name(name), email(email) {}

    string toString()
    {
        return this->name + " [" + this->email + "].";
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