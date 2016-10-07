//
//  Movie.hpp
//  CS172-Exam1
//
//  Created by Heidi Wiebers on 10/6/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
//I affirm that all code given below was written solely by me, Heidi Wiebers, and that any help I received adhered to the rules stated for this exam.


#ifndef Movie_hpp
#define Movie_hpp

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <vector>
#include <stdio.h>
#include "Theater.hpp"
using namespace std;

class Movie
{
private:
    string Title;
    string Genre;
    int ShowTime;
    
public:
    Movie();
    // initalizes the title, genre and show times
    Movie(string Title, string Genre, int ShowTime);
    // returns the title
    string GetTitle();
    // returns the genre
    string GetGenre();
    // returns the show time
    int GetShowtime();
};


#endif /* Movie_hpp */
