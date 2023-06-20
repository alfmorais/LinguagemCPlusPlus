#include <cstdio>


int main() {
    // type identifier = value;
    double price = 99.80;
    double tax = 0.08;

    // type identified = exp;
    double finalPrice = price * (1 + tax);

    // The final price is: 107.78.
    printf("The final price is: %.2f.", finalPrice);

    return 0;
}