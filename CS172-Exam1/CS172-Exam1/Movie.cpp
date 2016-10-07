//
//  Movie.cpp
//  CS172-Exam1
//
//  Created by Heidi Wiebers on 10/6/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
//I affirm that all code given below was written solely by me, Heidi Wiebers, and that any help I received adhered to the rules stated for this exam.
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <vector>
#include "Movie.hpp"
//#include "Theater.hpp"
using namespace std;


Movie::Movie()
{
    
}

// initalizes the title, genre, and show time
Movie::Movie(string Title, string Genre, int ShowTime)
{
    Title=Title;
    Genre=Genre;
    movieListing[]=Title;
}

// returns the title of the movie being called
string Movie::GetTitle()
{
    return Title;
}

// returns the genre of the movie being called
string Movie::GetGenre()
{
    return Genre;
}

// returns the showtime of the movie being called
int Movie::GetShowtime()
{
    return ShowTime;
}










