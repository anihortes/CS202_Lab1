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
    user.setName();
    cout << "Your current name: " << user.getName() << "\n";



    return 0;
}
