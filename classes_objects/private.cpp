#include <iostream>
using namespace std;

const double MINIMIUM_WAGE = 1500;

class Employee
{
private:
    string name;
    double wage;

public:
    string getName()
    {
        return this->name;
    }

    void setName(string newName)
    {
        this->name = newName;
    }

    double getWage()
    {
        return this->wage > MINIMIUM_WAGE ? this->wage : MINIMIUM_WAGE;
    }

    void setWage(double newWage)
    {
        if (newWage >= MINIMIUM_WAGE)
        {
            this->wage = newWage;
        }
    }
};

int main()
{
    Employee firstEmployee;
    firstEmployee.setName("Paul Smith");
    firstEmployee.setWage(6500.00);

    cout << firstEmployee.getWage() << endl;

    return 0;
}