// Helper functions for music

#include <stdio.h>
#include <string.h>
#include "helpers.h"
#include "cs50.h"
/*duration, which should take as input as a string a fraction (e.g., 1/4)
    and return as an int a corresponding number of eigths (2, in this case, since 1/4 is equivalent to 2/8)*/

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    double d, n ; 
  
      // Parse the fraction. 
    string numerator = strtok (fraction, "/");
      // In the next call to strtok, the first parameter needs to be NULL so that strtok starts
      // splitting the string from the next token's starting position it remembers.
    string denominator = strtok (NULL, "/");
    if (numerator == "1" && denominator == NULL)
      {
        f_eights = 1;
      }
    else
    {
        // Convert string to double float.  
      sscanf(numerator, "%lf", &n);
      sscanf(denominator, "%lf", &d);
      float f_eighths = n / d;
    }
      //Divide to see how many eighths are in the note.
    f_eighths /= .125;
      //Convert float to int. 
    int eighths = (int) f_eighths;
    printf("%d", eighths);
}

/*frequency, which should take as input as a string a note formatted as

XY (e.g., A4), where X is any of A through G and Y is any of 0 through 8, or

XYZ (e.g., A#4), where X is any of A through G, Y is # or b, and Z is any of 0 through 8,

and return as an int the note’s corresponding frequency, rounded to the nearest integer; and


// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
}

is_rest, which should return true if its input,
    a string, represents a rest in our machine-readable format, otherwise false.



// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
}
*/
