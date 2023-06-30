#include <iostream>
#include <sstream>

using namespace std;

class Date
{
    // Atributos e Comportamentos
    // Conjunto de Objetos
public:
    int day;
    int month;
    int year;

    string toString()
    {
        stringstream ss;
        ss << day
           << "/"
           << month
           << "/"
           << year;
        return ss.str();
    }
};

int main()
{
    Date dateOne;
    dateOne.day = 30;
    dateOne.month = 6;
    dateOne.year = 2023;

    Date dateTwo;
    dateTwo.day = 8;
    dateTwo.month = 6;
    dateTwo.year = 2023;

    // Print nos espaços da memórias
    cout << &dateOne << endl;
    cout << &dateTwo << endl;

    // Print nos atributos (valores) da classe Date
    cout << dateOne.day << "/" << dateOne.month << "/" << dateOne.year << endl;
    cout << dateTwo.day << "/" << dateTwo.month << "/" << dateTwo.year << endl;

    // Retornando os valores da chamada do método ToString()
    cout << dateOne.toString() << endl;
    cout << dateTwo.toString() << endl;

    return 0;
}