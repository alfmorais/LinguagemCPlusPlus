#include <iostream>

using namespace std;

// Memory Leak

class Person
{
public:
    string name;
    Person(string name) : name(name)
    {
        cout << "Hello! My name is " << this->name << endl;
    }
    ~Person()
    {
        cout << name << " saying goodbye!" << endl;
    }
};

Person *createPerson()
{
    Person person("Hanna");
    return &person;
}

int main()
{
    // Bad Example:
    Person *pointer;
    {
        Person personOne("Peter");
        pointer = &personOne;
    }
    cout << (*pointer).name << endl;

    Person* pointerTwo = createPerson();
    cout << (*pointerTwo).name << endl;

    cout << "End of code..." << endl;
    return 0;
}