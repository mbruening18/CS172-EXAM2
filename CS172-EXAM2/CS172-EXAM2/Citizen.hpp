//
//  Citizen.hpp
//  CS172-EXAM2
//
//  Created by Megan Bruening on 11/10/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
//I affirm that all code given below was written solely by me, Megan Bruening,
//and that any help I received adhered to the rules stated for this exam

#ifndef Citizen_hpp
#define Citizen_hpp
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
#include <stdio.h>

//declares a class
class Citizen
{
    //makes variables private
private:
    int ID;
    string FName;
    string LName;
    string favoritecolor;
   
    //makes functions public
public:
    
    //Creates a new Citizen object with the passed in
    //id, name, and favorite color
    //Once a citizen is created, you can't change their id or name
    //but you can change their favorite color
    Citizen(int id,string firstName, string lastName, string color);
    
    //Creates a new Citizen object by copying data from the
    //passed in citizen
    Citizen(Citizen* citizen);
    
    //Returns the first name of this citizen
    string getFirstName();
    
    //Returns the last name of this citizen
    string getLastName();
    
    //Returns the id for this citizen
    int getId();
    
    //Returns the favorite color for this citizen
    string getFavoriteColor();
    
    //Sets the favorite color for this citizen
    void setFavoriteColor(string color);
};


#endif /* Citizen_hpp */
