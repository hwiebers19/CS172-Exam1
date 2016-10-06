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
#include <string>
#include <stdio.h>
using namespace std;

class Movie
{
private:
    string Title;
    string Genre;
    int ShowTime;
    
public:
    //int TitleDearJohn();
    Movie();
    //int GenreAction;
    Movie(string Title, string Genre, int ShowTime);
    string GetTitle();
    string GetGenre();
    int GetShowtime();
};


#endif /* Movie_hpp */
