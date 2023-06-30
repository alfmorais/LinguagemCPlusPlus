#include <iostream>
#include <sstream>

using namespace std;

class Product
{
public:
    string name;
    double price;
    double discount;

    double finalPrice()
    {
        double finalPriceValue;
        finalPriceValue = price * (1 - discount);

        return finalPriceValue;
    }
};

int main()
{
    Product productOne;
    productOne.name = "Notebook";
    productOne.price = 1600.45;
    productOne.discount = 0.15;

    cout << productOne.name << endl;
    cout << productOne.price << endl;
    cout << productOne.discount << endl;
    cout << productOne.finalPrice() << endl;

    // Direct List Initialization
    Product productTwo {"Ipad", 899.99, 0.10};
    cout << productTwo.name << endl;
    cout << productTwo.price << endl;
    cout << productTwo.discount << endl;
    cout << productTwo.finalPrice() << endl;

    return 0;
}