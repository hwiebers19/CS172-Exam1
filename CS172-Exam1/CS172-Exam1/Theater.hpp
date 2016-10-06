//
//  Theater.hpp
//  CS172-Exam1
//
//  Created by Heidi Wiebers on 10/6/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef Theater_hpp
#define Theater_hpp
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
using namespace std;

class Theater
{
private:
    string Name;
    string Phone;
    int Hour;
    int ShowTimeForGenre;
    int PopcornPrice;
    int CokePrice;
    
    
public:
    Theater(string Name, string Phone); //The name for this theater
    void AddMovie(Movie& Movie); //Add a movie at a specific time
    string GetMovieForHour(int Hour); //Return the movie shown at or after the given hour
    //   Return "" if none are upcoming
    int GetShowTimeForGenre(string Genre);//When will the movie of the given genre be shown?
    //   Return -1 if none exist
    int GetPopcornPrice(); //Make up a cost in dollars for popcorn
    int GetCokePrice(); //Make up a cost on Coke
};


#endif /* Theater_hpp */
