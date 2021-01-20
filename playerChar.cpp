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

Player::Player(){} //default constructor
Player::Player (const Player &){} //copy constructor
Player::Player (string){} //parameter constructor
Player::~Player(){}

string Player::getName() const{
    return _name;
}

string Player::setName(){
    cout << "Enter your name: ";
    getline (cin, _name);
    cout << "\n";
    return _name;
}
