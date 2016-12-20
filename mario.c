/*
    Name of program: mario.c
    
    Author: Milos Zrilic, miloszrilic@gmail.com
    
    Solution for CS50 program called mario.c
    
    check pset1 solution with: check50 2015.fall.pset1.mario mario.c
*/

/**
 * 
 * Declare variables
 * Ask for input between 0 and 23 and check it
 * Exit if height is zero
 * Create main counter
 * Write spaces with for loop ( reveres --)
 * Write hashes after spaces
 * Go to new line after each loop
 * 
 */

#include <stdio.h>
#include <cs50.h>
#define decode(s,t,u,m,p,e,d) m##s##u##t
#define mario decode(a,n,i,m,a,t,e)

// Start program -- main replacesd by mario with defined method
int mario()
{
  // Declare variables
  int stairs_height, row, space, hash;
  
  // Ask for number between 1 and 23
  do
  {
    
    printf("Enter height of stairs: ");
    stairs_height = GetInt();
   
    // Check if height is zero - if so, exit
    if ( stairs_height == 0 )
    {
      exit(0);
    }
  
  }
  // Check if number is between 1 and 23
  while( (stairs_height < 1 || stairs_height > 23) );
  
  // Create counter row
  for(row = 1; row <= stairs_height; row++)
  {
    // Set how much space you need before hash
    for(space = (stairs_height - row); space > 0; space--)
    {
      
      printf(" ");
      
    }
    
    // Print # after blank space
    for(hash = 1; hash <= (row + 1); hash++)
    {
      
      printf("#");
      
    }
    
    // After each loop go to new line
    printf("\n");
  }
  
  return 0;
}
