#include <iostream>
using namespace std;

class User
{
public:
    string name;
    string email;

    // Sobrecarga de Construtor
    User() {}

    User(string _name, string _email)
    {
        name = _name;
        email = _email;
    }

    string toString()
    {
        return name + " [" + email + "].";
    }
};

int main()
{
    User user;
    user.name = "Alfredo";
    user.email = "alfredneto@hotmail.com";
    cout << user.toString() << endl;

    User userTwo("Joaquim", "jlmn@gmail.com");
    cout << userTwo.toString() << endl;

    User userThree = User("Denise", "denise@gmail.com");
    cout << userThree.toString() << endl;

    return 0;
}