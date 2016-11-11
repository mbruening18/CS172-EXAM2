//
//  City.hpp
//  CS172-EXAM2
//
//  Created by Megan Bruening on 11/10/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
//I affirm that all code given below was written solely by me, Megan Bruening,
//and that any help I received adhered to the rules stated for this exam

#ifndef City_hpp
#define City_hpp

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
#include "Citizen.hpp"

//declares class City
class City
{
    //makes variables Private
private:
    string NameOfCity;
    int NumberOfCitizens;
    vector<Citizen*> NEWCITY;
    
    //makes functions public
public:
    
    //Creates a new city with the given name
    //When the city is created you need to restore
    //it's population from a file.
    //Hint: You will want to make the file name
    //be based on the name of the city.
    City(string cityName);
    
    //This is the destructor for the city.  When
    //this city is destroyed, save the population of
    //the city to a file so that you can restore
    //it in the constructor the next time that
    //a city with this name is created.
    ~City();
    
    //Returns the city name
    string getCityName();
    
    //Returns the number of citizens in this city
    int populationSize();
    
    //Returns the citizen at the given index.
    Citizen* getCitizenAtIndex(int index);
    
    //Adds a citizen to this city. You will need to
    //make a copy of this citizen so that you make
    //sure to keep it around for the life of the city.
    void addCitizen(Citizen* citizen);
    
    //Returns the citizen with the given id.
    Citizen* getCitizenWithId(int id);
    
    //Returns a vector of citizens that all have
    //the given color as their favorite color.
    //For example, if color is “Blue” this will return all citizens
    //for this city who’s favorite color is Blue.
    vector<Citizen*> getCitizensForFavoriteColor(string color);
};


#endif /* City_hpp */
