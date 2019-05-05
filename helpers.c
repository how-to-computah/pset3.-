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
    float f_eighths = 0;  

      // Parse the fraction. 
    string numerator = strtok (fraction, "/");
      // In the next call to strtok, the first parameter needs to be NULL so that strtok starts
      // splitting the string from the next token's starting position it remembers.
    string denominator = strtok (NULL, "/");

    //Convert numerator to double to check for whole notes. 
    sscanf(numerator, "%lf", &n);
      if (n >= 1 && denominator == NULL)
        {
          f_eighths = n;
        }
      else
        {
            // Convert string to double.  
          sscanf(numerator, "%lf", &n);
          sscanf(denominator, "%lf", &d);
          f_eighths = n / d;
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

*/
// Calculates frequency (in Hz) of a note
int frequency(string note)
{

// f = (2 ^ (n/12)) * 440; 

typedef struct 
{
    char* key;
    int step;
}freq; 

// Struct for how many semitones away note is within the octave. 

freq s_tone[] = {{"C", -9}, {"C#", -8}, {"Db", -8}, {"D", -7}, {"D#", -6}, 
                {"Eb", -6},{"E", -5}, {"F", -4}, {"F#", -3}, {"Gb", -3}, 
                {"G", -2}, {"G#", -1}, {"Ab", -1}, {"A", 0}, {"A#", 1}, 
                {"Bb", 1}, {"B", 2}};
                        
    char* note = "Db7";
    char* find = NULL; 
                               
    find = strchr(note, '#');  
    find = strchr(note, 'b'); 
                                     
    if (find)
    {
        char *tmp; char octave[2]; char* p_note;
        //allocate memory for new string. 
        tmp = (char *) malloc(sizeof (note + 1 ));
        // make a copy of note to work with. 
        strcpy (tmp, note);                          
        strcpy (octave ,tmp + 2);
        // parse tmp, get the note by itself. 
        p_note = strtok(tmp, octave);        
 
        printf("%s \n", octave);
        printf("%s \n", p_note);
    }
    else
        strcpy (octave ,tmp + 1);
        printf("%s", note);
    
    for (int i = 0; s_tone[i].key ; i++)
        if (strcmp(note, s_tone[i].key) == 0)
            {
            printf("Semitones away: %d \n", s_tone[i].step);
            break;
            }
        else
            //printf("%s %d \n", s_tone[i].key, s_tone[i].step);
for (int i = 0; s_tone[i].key ; i++)
        printf("%s %d \n", s_tone[i].key, s_tone[i].step);

}

is_rest, which should return true if its input,
    a string, represents a rest in our machine-readable format, otherwise false.



// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
}
*/
