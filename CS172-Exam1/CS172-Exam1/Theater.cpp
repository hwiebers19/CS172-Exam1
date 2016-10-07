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
#include <iomanip>
#include <vector>
#include "Theater.hpp"
#include "Movie.hpp"
using namespace std;
double m=0;
Movie movieListing[m];

Theater::Theater()
{
    
}
// initializes the name,  the phone number, the popcorn and coke price
Theater::Theater(string Name, string Phone)
{
    Name = Name;
    Phone = Phone;
    PopcornPrice = 6;
    CokePrice = 2;
}

//Add a movie at a specific time
void Theater::AddMovie(Movie const& Movie)
{
   // Movie.Movie();
    static int i = 0;
    movieListing[m] = Movie;
    i++;
}

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
//h = Hour;
//return h;
    //int h=0;
    //Hour= h
    string Movie;
    if(Hour < 0 || Hour > 24)
    {
        return "";
    }
    for(int m = 0; m < Hour; m ++)
    {
        if(movieListing[m].GetShowtime() >= Hour)
        {
            Movie = movieListing[m].GetTitle();
            return Movie;
        }
        else
        {
            Movie = "";
        }
    }
    return Movie;
    
}

// returns when the movie of the given genre will show
// returns -1 if none exist
int Theater::GetShowTimeForGenre(string Genre)
{
    for(int i = 0; i < Hour; i ++)
    {
        if(movieListing[i].GetGenre() == Genre)
        {
            return movieListing[i].GetShowTime();
        }
        else
        {
            return -1;
        }
    }
}

// returns the price of popcorn
int Theater::GetPopcornPrice()
{
    return PopcornPrice;
}

// returns the price of coke
int Theater::GetCokePrice()
{
    return CokePrice;
}








