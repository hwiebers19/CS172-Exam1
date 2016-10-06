//
//  Theater.hpp
//  CS172-Exam1
//
//  Created by Heidi Wiebers on 10/6/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
//I affirm that all code given below was written solely by me, Heidi Wiebers, and that any help I received adhered to the rules stated for this exam.
#ifndef Theater_hpp
#define Theater_hpp
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include "Movie.hpp"
using namespace std;

class Theater
{
private:
    string Name;
    string Phone;
    int Hour;
    string Gnere;
    int ShowTimeForGenre;
    int PopcornPrice;
    int CokePrice;
    
    
public:
    //creates a movie theater with the given name and phone number.
    Theater(string Name, string Phone); //The name for this theater
    void AddMovie(Movie& Movie);
    //Add a movie at a specific time
    // returns the movie of the hour in question
    string GetMovieForHour(int Hour); //Return the movie shown at or after the given hour
    //   Return "" if none are upcoming
    // returns the show times for the genre in question
    int GetShowTimeForGenre(string Genre);//When will the movie of the given genre be shown?
    //   Return -1 if none exist
    // returns the popcorn prices
    int GetPopcornPrice(); //Make up a cost in dollars for popcorn
    // returns the coke prices
    int GetCokePrice(); //Make up a cost on Coke
};


#endif /* Theater_hpp */
