//
// Created by A. Harrison Owen on 1/19/2021.
//

#ifndef UNTITLED1_PLAYERCHAR_H
#define UNTITLED1_PLAYERCHAR_H

#include <string>
using std::string;

class playerChar {
public:
    int getHealth() const;
    string name;
private:
    int exp;
    int level;
    
};


#endif //UNTITLED1_PLAYERCHAR_H
