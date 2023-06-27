#include <iostream>

using namespace std;

// 6! = 6 * 5 * 4 * 3 * 2 * 1
int factorial(int number)
{
    int total = 1;

    for (int i = 2; i <= number; i++)
    {
        total *= i;
    }
    return total;
}

int factorialRecursion(int number)
{
    if (number == 1)
    {
        return 1;
    }
    return number * factorialRecursion(number - 1);
}

int main()
{
    cout << factorial(3) << endl;
    cout << factorial(4) << endl;
    cout << factorial(5) << endl;
    cout << factorial(6) << endl;
    cout << factorialRecursion(3) << endl;
    cout << factorialRecursion(4) << endl;
    cout << factorialRecursion(5) << endl;
    cout << factorialRecursion(6) << endl;
    return 0;
}