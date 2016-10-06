//
//  Theater.cpp
//  CS172-Exam1
//
//  Created by Heidi Wiebers on 10/6/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
//I affirm that all code given below was written solely by me, Heidi Wiebers, and that any help I received adhered to the rules stated for this exam.
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include "Theater.hpp"
//#include "Movie.hpp"
using namespace std;

Theater::Theater(string Name, string Phone)
{
    
}
//The name for this theater

void AddMovie(Movie& Movie)
{
    Movie.Movie();
}
//Add a movie at a specific time

// returns the movie shown at or after the given hour
// returns a blank string if there are none upcoming
string Theater::GetMovieForHour(int Hour)
{
    /*for(int i=0; i<Hour.length(); i++)
    {
        
    }
    
    string mov;
    mov=m;
        
    return mov;
     */
}

int Theater::GetShowTimeForGenre(string Genre);
{
    return Genre;
}
//When will the movie of the given genre be shown?
//   Return -1 if none exist

// returns the price of popcorn
int Theater::GetPopcornPrice()
{
    return PopcornPrice;
}
//Make up a cost in dollars for popcorn

// returns the price of coke
int Theater::GetCokePrice()
{
    return CokePrice;
}
//Make up a cost on Coke







