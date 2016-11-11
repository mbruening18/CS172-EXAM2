//
//  City.cpp
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

#include "City.hpp"
#include "Citizen.hpp"

//arg constructor for city
City::City(string cityName)
{
    
    NameOfCity = cityName;
    NumberOfCitizens = 0;
    
    string fileName = cityName + ".txt";
    
    //sees if there is a new file or not
    ifstream fileIO(fileName);
    
    if(fileIO.fail())
    {
        ofstream NewFile(fileName);
        if(!NewFile)
        {
            cout << "ERROR: File could not be opened" << endl;
        }
        NewFile.close();
    }
    //else creates a file
    else
    {
        int id;
        string color;
        string Fname;
        string Lname;
        
        while (!fileIO.eof())
        {
            fileIO >> id >> Fname >> Lname >> color;
            Citizen* citizenToAdd = new Citizen(id, Fname, Lname, color);
            NEWCITY.push_back(citizenToAdd);
            NumberOfCitizens++;
        }
    }
    fileIO.close();
}

//This is the destructor for the city.  When
//this city is destroyed, save the population of
//the city to a file so that you can restore
//it in the constructor the next time that
//a city with this name is created.
City::~City()
{
    string fileName = cityName + ".txt";
    fstream output(fileName, ios::out);
    if(output.fail())
        cout << "ERROR: File could not be opened" << endl;
    else
    {
        for(int i=0; i < NumberOfCitizens; i++)
        {
            output << NEWCITY.at(i)->getId() << " " <<  NEWCITY.at(i)->getFirstName() << " " <<
            NEWCITY.at(i)->getLastName() << " " << NEWCITY.at(i)->getFavoriteColor() << endl;
        }
    }
    output.close();
}

//Returns the city name
string City::getCityName()
{
    return NameOfCity;
}

//Returns the number of citizens in this city
int populationSize()
{
    int size=0;
    return NEWCITY.at(size);
}

//Returns the citizen at the given index.
Citizen* City::getCitizenAtIndex(int index)
{
    return (NEWCITY.at(index));
}

//Adds a citizen to this city. You will need to
//make a copy of this citizen so that you make
//sure to keep it around for the life of the city.
void City::addCitizen(Citizen* citizen)
{
    Citizen* citizenToAdd = new Citizen(citizen);
    NEWCITY.push_back(citizenToAdd);
    NumberOfCitizens++;
}

//Returns the citizen with the given id.
Citizen* City::getCitizenWithId(int id)
{
    bool create = false;
    while(create == false)
    {
        int IDtest;
        for(int i=0; i < NumberOfCitizens ; i++)
        {
            if(IDtest == NEWCITY.at(i)->getId())
            {
                create = true;
                return (NEWCITY.at(i));
                break;
            }
        }
    }
    return (NEWCITY.at(0));
}

//Returns a vector of citizens that all have
//the given color as their favorite color.
//For example, if color is “Blue” this will return all citizens
//for this city who’s favorite color is Blue.
vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
    vector<Citizen*> SameFavColor;
    string FavColor;
    
    for(int i=0; i < NumberOfCitizens; i++)
    {
        if(NEWCITY.at(i)->getFavoriteColor() == FavColor)
            SameFavColor.push_back(NEWCITY.at(i));
    }
    return SameFavColor;
}


