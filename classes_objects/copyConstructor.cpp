#include <iostream>
using namespace std;

class Player
{
public:
    string name;
    int health;

    Player(string _name, int _health = 100) : name(_name), health(_health) {}
    Player(const Player &player) : name(player.name), health(player.health)
    {
        cout << "Copy Constructor..." << endl;
    }
    ~Player() { cout << "Destructor" << endl; }

public:
};

void printPlayer(Player &player)
{
    cout << player.name << " [" << player.health << "%]" << endl;
}

int main()
{
    Player playerMonster("Monster");
    printPlayer(playerMonster);
    return 0;
}