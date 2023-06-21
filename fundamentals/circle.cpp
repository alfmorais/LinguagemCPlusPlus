#include <iostream>
#include <cstdio>
#include <math.h>


using namespace std;


int main() {
    double PI = 3.14;
    double radius;
    double areaCircle;
    double radiusSquared;

    cout << "Digite o raio do seu circulo: ";
    cin >> radius;

    radiusSquared = pow(radius, 2);
    areaCircle = PI * radiusSquared;

    printf("A área do círculo é %.2f.\n", areaCircle);
    return 0;
}