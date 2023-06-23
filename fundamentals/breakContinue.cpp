#include <iostream>

using namespace std;

int main()
{
    for (int counter = 0; counter < 10; counter++)
    {
        if (counter == 5)
        {
            // break;
            continue;
        }
        cout << counter << endl;
    }

    cout << "End." << endl;

    return 0;
}