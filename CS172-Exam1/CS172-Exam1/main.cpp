//
//  main.cpp
//  CS172-Exam1
//
//  Created by Heidi Wiebers on 10/4/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
//I affirm that all code given below was written solely by me, Heidi Wiebers, and that any help I received adhered to the rules stated for this exam.
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include "Movie.hpp"
#include "Theater.hpp"
using namespace std;

int main() {
    const int MOVIECOUNT = 11;
    // initialize the movie names
    Movie movieListing[] = {
        Movie("Bull Durham", "Comedy", 0), Movie("Ocean's Eleven", "Action", 2),
        Movie("Monte Python's Meaning of Life", "Comedy", 5), Movie("Jaws", "Horror", 7),
        Movie("Fletch", "Comedy", 10), Movie("Usual Suspects", "Action", 12),
        Movie("Bull Durham", "Comedy", 14), Movie("Ocean's Eleven", "Action", 16),
        Movie("Monte Python's Meaning of Life", "Comedy", 19), Movie("Jaws", "Horror", 21),
        Movie("Usual Suspects", "Action", 23),
    };
    // use a for loop to ask the theater what the movie is that is playing at a certain time
    Theater garland("The Garland", "509-327-2509");
    for (int m = 0; m < MOVIECOUNT; m++) {
        garland.AddMovie(movieListing[m]);
    }
    int errors = 0;
    // use if statements to check if there is a movie at the time entered and output whether ther is or if there is an error with the time enetered
    if (garland.GetMovieForHour(-1) != "") {
        errors++;
        cout << "error: not handling -1 correctly\n";
    }
    if (garland.GetMovieForHour(25) != "") {
        errors++;
        cout << "error: not handling 25 correctly\n";
    }
    if (garland.GetMovieForHour(18) != "Monte Python's Meaning of Life") {
        errors++;
        cout << "error: incorrect movie for 18th hour\n";
    }
    if (garland.GetShowTimeForGenre("Comedy") != 0) {
        errors++;
        cout << "error: incorrect Comedy\n";
    }
    if (errors == 0) cout << "Passed\n";
    else cout << "Errors: " << errors << endl;
    
    
    
    return 0;
}
