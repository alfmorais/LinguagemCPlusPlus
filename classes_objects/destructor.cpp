#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    Person(string name = "Anonymous") : name(name)
    {
        cout << "Hello! My name is " << name << endl;
    }

    ~Person() {
        cout << name << " saying goodbye!" << endl;
    }

/*     string toString()
    {
        return this->name + " [" + this->email + "].";
    } */
};

int main()
{
    Person personOne("Mary");
    Person personTwo("Joaquim");
    Person personThree;
    return 0;
}