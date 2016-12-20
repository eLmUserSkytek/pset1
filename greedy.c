/*
    Name of program: greedy.c
    
    Author: Milos Zrilic, miloszrilic@gmail.com
    
    Solution for CS50 program called greedy.c
    
    check pset1 solution with: check50 2015.fall.pset1.greedy greedy.c
*/

/**
 * 
 * Define possible coins (25,10,5,1)
 * Declare variables
 * Ask customer how much we own him
 * Check input
 * Convert amount in cents and round it - round( amount * 100)
 * Calculate quarters and get moduo for lefover coins
 * Calculate dimes and get moduo for lefover coins
 * Calculate nickles and get moduo for lefover coins
 * Calculate pennies and get moduo for lefover coins
 * Sum all values to get minimum coins returned
 * Print solution
 *
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>
#define decode(s,t,u,m,p,e,d) m##s##u##t
#define give_me_the_change decode(a,n,i,m,a,t,e)

#define QUARTER 25;
#define DIME 10;
#define NICKLE 5;
#define PENNIE 1;

// Declare variables
float required_change = 0;
int change_in_cents = 0;
int quarter_counter = 0;
int dime_counter = 0;
int nickle_counter = 0;
int pennie_counter = 0;
int change_left = 0;
int coins_returned = 0;
     
int give_me_the_change(void)
{
   
   // Ask for required amount of change and check if it's greater than zero
   do
   {
       
       printf("How much we own you? ");
       required_change = GetFloat();
       
       if ( required_change <= 0 )
       {
           printf("You can't take more than you deserve!\n");
       }
   }
    while ( required_change <= 0);
    
    // Convert given amount in cents
    change_in_cents = (int)round(required_change*100);
    
    // Define how many quarters customer can get and how much we still own to him
    quarter_counter = change_in_cents / QUARTER;
    change_left = change_in_cents % QUARTER;
   
    
    // Define how many dimes customer can get and how much we still own to him
    dime_counter = change_left / DIME;
    change_left = change_left % DIME;
   
    
    // Define how many nickles customer can get and how much we still own to him
    nickle_counter = change_left / NICKLE;
    change_left = change_left % NICKLE;
    
    
    // Define how many pennies customer can get and how much we still own to him
    pennie_counter = change_left / PENNIE;
    change_left = change_left % PENNIE;
    
    
    // Coins returned to the customer
    coins_returned = quarter_counter + dime_counter + nickle_counter + pennie_counter + change_left;
    
    
    // Print how many coins is returned
    printf("%d\n", coins_returned);
    
    return 0;
}
