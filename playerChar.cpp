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
Player::Player (const Player &user){
    this -> _name = user.getName();
    cout << "Copy constructor is called. \n" ;
}

//parameter constructor
Player::Player (string tempName){
    _name = tempName;
    cout << "Parameter constructor is called. \n" ;
}

//destructor
Player::~Player(){
    cout << "Destructor is called on " << _name << "\n" ;
}

string Player::getName() const{
    return _name;
}

string Player::setName(){
    cout << "Enter your name:";
    getline (cin, _name);
    return _name;
}



