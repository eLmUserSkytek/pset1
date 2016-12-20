/*
    Name of program: water.c
    
    Author: Milos Zrilic, miloszrilic@gmail.com
    
    Solution for CS50 program called water.c
    
    check pset1 solution with: check50 2015.fall.pset1.water water.c
*/

/**
 * 
 * Make function for bottles calculating - CountBottles();
 * Write down function
 * Declare constant values (can not be changed)
 * Declare variables
 * Calculate how many galons you need per minute
 * Ask for input and check input
 * Calculate bottles with function which is alrady defined
 * 
 */

#include <stdio.h>
#include <cs50.h>
#define decode(s,t,u,m,p,e,d) m##s##u##t
#define count_bottles decode(a,n,i,m,a,t,e)


// Define constant values
const float galon_weight = 128;
const float galon = 1.5;
const int bottle_weight = 16;

// Declare variables
int time, bottle;
float galon_per_minute;
char character;

// Write down, already made, function
int CountBottles(void);

// Start program -- main replaced with count_bottles with defined method
int count_bottles(void)
{
    
    // Galons per minute
    galon_per_minute = galon_weight * galon;

    
    // Ask for input while it's not greater than 0
    do
    {
        
        printf("How long does it take you to shower? ");
        time = GetInt();
        
    }
    while( time < 0 );
    
    // Call function for calculating amount of bottles
    CountBottles();
}

// Function for counting bottles
int CountBottles(void)
{
    
    bottle = time * galon_per_minute;
  
    return printf("That is around %i bottles of 0.5l...\n", (int)bottle/bottle_weight);
    
}
