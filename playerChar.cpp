//
// Created by A. Harrison Owen on 1/19/2021.
//
#include "playerChar.h"
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

//default constructor
Player::Player(){
    cout << "Default constructor is called. \n" ;
}
//copy constructor
Player::Player (const Player &){
    cout << "Copy constructor is called. \n" ;
}
//parameter constructor
Player::Player (string){
    cout << "Parameter constructor is called. \n" ;
}
//destructor
Player::~Player(){
    cout << "Destructor is called. \n" ;
}

string Player::getName() const{
    return _name;
}

string Player::setName(){
    cout << "Enter your name:";
    getline (cin, _name);
    return _name;
}

string Player::refName(string &playerName){
    cout << "Enter your new name:";
    getline (cin, _name);
    playerName = _name;
    return playerName;
}
