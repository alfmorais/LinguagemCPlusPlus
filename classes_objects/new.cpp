#include <iostream>
using namespace std;

int main() {
    int x = 5; // Stack

    // new => malloc() + constructor | Heap 4 bytes
    int *y = new int(10);
    cout << x * *y << endl;
    // delete ==> free() + destructor
    delete *y;
    return 0;
}