#include <iostream>
#include <string>
#include <vector>
#include "playerChar.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

//change users name
Player passValue(Player user){
    user.setName();
    return user;
}

//change users name
void passRef(Player &user){
    user.setName();
}

//function needs to do something, so it just prints
void constRefName(const Player &user){
    cout << user.getName() << std::endl;
}

int main() {
    vector <Player> playerList;
    cout << "Creating default constructor and push it to vector.\n";
    Player user;
    playerList.push_back(user);

    user.getName();
    user.setName();
    playerList.push_back(user);

    cout << "Your current name:" << user.getName() << "\n";
    cout << "Creating copy constructor. Push to vector\n";
    Player userCopy(user);
    playerList.push_back(userCopy);

    cout << "Creating parameterized constructor. Push to vector.\n";
    Player nonPlayChar ("joe");
    playerList.push_back(nonPlayChar);
    playerList.push_back(nonPlayChar);

    cout << "NPC current name: " << nonPlayChar.getName() << endl;
    nonPlayChar = passValue(nonPlayChar);
    cout << "NPC new name: " << nonPlayChar.getName() << endl;

    cout << "user current name: " << user.getName() << endl;
    passRef(user);
    cout << "user new name: " << user.getName() << endl;

    cout << "userCopy current name: " << user.getName() << endl;
    constRefName(userCopy);
    cout << "userCopy new name: " << userCopy.getName()<< endl;


    cout << "prints vector\n";
    for (auto i : playerList){
        cout << i.getName() << endl;
    }

    cout << "\n CS202 LAB 2:\n";

    string *ptr = new string;
    int *intArray = new int[10];

    delete ptr;
    delete []intArray;
    Player *playerPtr;
    playerPtr = new Player("joe");


    delete playerPtr;
    return 0;
}
