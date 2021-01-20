#include <iostream>
#include <string>
#include <vector>
#include "playerChar.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int main() {
    Player user;
    user.getName();
    user.setName();
    cout << "Your current name:" << user.getName() << "\n";
    string newName;
    user.refName(newName);
    cout << "Your current name:" << user.getName() << "\n";
    Player userCopy = user;
    Player nonPlayChar ("joe");
    cout << "NPC name: " << nonPlayChar.getName() << "\n";






    return 0;
}
