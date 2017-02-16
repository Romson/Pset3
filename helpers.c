/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    /* (Linear serach algorithm, commented out) Enter for loop to check if value is in values[i], if not- return false;.
    for ( int i = 0; i < n; i++ )
    {
        if ( values[i] == value )
        {
            return true;
        }
    } 
    return false; */
    
    // Enter variables to use in binary search algorithm
    int first = 0;
    int last = n - 1;
    int middle = (first + last) / 2;
    
    // Enter while loop to merge with sortin code below
    while ( first <= last )
    {
        if ( values[middle] == value )
        {
            return true;
        }
        else if ( values[middle] < value )
        {
            first = middle + 1;
        }
        else
        {
        last = middle - 1;
        }
        middle = ( first + last ) / 2;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
   // Enter for loop and use variables 'i' and 'j' wich will be used to check if one is 
   // larger (>) than the other If this is true, the larger integer will be stored 
   // in variable 'swap' and pushed n+1 spots forward untill the if statement reads false.
   for ( int i = 0; i < ( n - 1 ); i++)
   {
       for ( int j = 0; j < n - i - 1; j++)
       {
           if ( values[j] > values[j+1] )
           {
               int swap     = values[j];
               values[j]    = values[j+1];
               values[j+1]  = swap;
           }
       }
   }
    return;
}