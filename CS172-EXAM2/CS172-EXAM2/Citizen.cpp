//
//  Citizen.cpp
//  CS172-EXAM2
//
//  Created by Megan Bruening on 11/10/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
//I affirm that all code given below was written solely by me, Megan Bruening,
//and that any help I received adhered to the rules stated for this exam

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <fstream>
#include <vector>

using namespace std;

#include "Citizen.hpp"

//assigns id, firstname,lastname, and favorite color to a citizen
Citizen::Citizen(int id, string firstName, string lastName, string color)
{
    ID = id;
    FName = firstName;
    LName = lastName;
    favoritecolor = color;
}

//assigns using pointers to create object
Citizen::Citizen(Citizen* citizen)
{
    ID = citizen->getId();
    FName = citizen->getFirstName();
    LName = citizen->getLastName();
    favoritecolor = citizen->getFavoriteColor();
}

//returns the first name of this citizen
string Citizen::getFirstName()
{
    return FName;
}

//returns the last name of this citizen
string Citizen::getLastName()
{
    return LName;
}

//returns the id for this citizen
int Citizen::getId()
{
    return ID;
}

//Returns the favorite color for this citizen
string Citizen::getFavoriteColor()
{
    return favoritecolor;
}

//Sets the favorite color for this citizen
void Citizen::setFavoriteColor(string color)
{
    favoritecolor = color;
}


