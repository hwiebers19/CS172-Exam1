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
#include "Movie.hpp"
using namespace std;

Theater::Theater(string Name, string Phone)
{
    name = Name;
    phone = Phone;
    PopcornPrice = 6;
    CokePrice = 2;
}
//The name for this theater

void Theater::AddMovie(Movie & Movie)
{
   // Movie.Movie();
    static int i = 0;
    MovieList[i] = Movie;
    i++;
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
//h = Hour;
//return h;
    //int h=0;
    //Hour= h
    string Movie;
    if(Hour < 0 || Hour > 24)
    {
        return "";
    }
    for(int i = 0; i < HOURS; i ++)
    {
        if(MovieList[i].GetShowtime() >= hour)
        {
            Movie = MovieList[i].GetTitle();
            return movie;
        }
        else
        {
            Movie = "";
        }
    }
    return Movie;
    
}

int Theater::GetShowTimeForGenre(string Genre);
{
    /*if (genre = comidy)
    {
        cout << "";
    }
    */
    //Genre(i);
    //return Genre;
    return -1;
}
//When will the movie of the given genre be shown?
//   Return -1 if none exist

// returns the price of popcorn
int Theater::GetPopcornPrice()
{
    PopcornPrice=0;
    return PopcornPrice;
}
//Make up a cost in dollars for popcorn

// returns the price of coke
int Theater::GetCokePrice()
{
    CokePrice=0;
    return CokePrice;
}
//Make up a cost on Coke







