//
// Created by A. Harrison Owen on 1/19/2021.
//

#ifndef UNTITLED1_PLAYERCHAR_H
#define UNTITLED1_PLAYERCHAR_H

#include <string>
#include <vector>
using std::string;
using std::vector;
class Player{

public:
    Player(); //default constructor
    Player (const Player &); //copy constructor
    Player (string); //parameter constructor
    ~Player(); //destructor 

    string copyName(string _name);
    string refName(string &_name);
    string useName(const string &_name);

    vector <string> nameList() const;

private:
    string _name;
};


#endif //UNTITLED1_PLAYERCHAR_H
