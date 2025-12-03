// Filename: AdventureGame.cpp
// Link: https://github.com/dqc1985/AdventureGame

#include <iostream>
#include <string>
using namespace std;

// Base class
class Character {
protected:
    string name;
    int health;
public:
    Character(string n, int h) : name(n), health(h) {}
    virtual void attack() = 0;
    bool isAlive() { return health > 0; }
    void takeDamage(int dmg) { health -= dmg; }
    void displayStatus() {
        cout << name << " has " << health << " HP left." << endl;
    }
};

// Derived class 1
class Hero : public Character {
public:
    Hero(string n) : Character(n, 100) {}
    void attack() override {
        cout << name << " swings a sword!" << endl;
    }
};

// Derived class 2
class Monster : public Character {
public:
    Monster(string n) : Character(n, 50) {}
    void attack() override {
        cout << name << " breathes fire!" << endl;
    }
};

// Main game loop
int main() {
    Hero player("Knight");
    Monster enemy("Dragon");

    cout << "Adventure Game Begins!" << endl;

    while (player.isAlive() && enemy.isAlive()) {
        player.attack();
        enemy.takeDamage(20);
        enemy.displayStatus();

        if (!enemy.isAlive()) break;

        enemy.attack();
        player.takeDamage(15);
        player.displayStatus();
    }

    if (player.isAlive())
        cout << "You defeated the enemy!" << endl;
    else
        cout << "You were defeated..." << endl;

    return 0;
}
