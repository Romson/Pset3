/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // TODO: If argc 2 and 3 are not given, meaning the string on the command line after 
    // entering program name generate.c as /.generate, the printf line given in the brackets 
    // will display correct usage of the program. In this case it will display: "Usage: generate n [s]".
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // TODO: The input given in command line argc2 is converted into an integer using atoi. 
    // Argc2 is the same as argv1 because the program name "generate" is the 0th index number 
    // in argv[], thus making argc2 the same as argv1. The program name "generate" is thus argv[0].
    int n = atoi(argv[1]);

    // TODO: The string input given for [s] on command line argc3 is converted into an integer using atoi.
    // Argc3 is argv2 because the program name "generate" is the 0th index number in argv[], thus making argc3
    // the same as argv2 (0, 1, 2).
    if (argc == 3)
    {
        srand48((long int) atoi(argv[2]));
    }
    else
    {
        srand48((long int) time(NULL));
    }

    // TODO: Integer 'i' is given with an intial value of 0. This for loop will keep running as long 
    // as the value of of 'i' is smaller than the inpout given in argc2 (argv[1]). As long as the 
    // condition is true, meaning if 'i' is smaller than 'n', the loop keeps running. 
    // The output -printf in the brackets- will be a list of 'n' pseudorandom numbers.
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // TODO: If argc 2 and 3 are not given, meaning the string on the command line after 
    // entering program name generate.c as /.generate, the printf line given in the brackets 
    // will display correct usage of the program. In this case it will display: "Usage: generate n [s]".
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // TODO: The input given in command line argc2 is converted into an integer using atoi. 
    // Argc2 is the same as argv1 because the program name "generate" is the 0th index number 
    // in argv[], thus making argc2 the same as argv1. The program name "generate" is thus argv[0].
    int n = atoi(argv[1]);

    // TODO: The string input given for [s] on command line argc3 is converted into an integer using atoi.
    // Argc3 is argv2 because the program name "generate" is the 0th index number in argv[], thus making argc3
    // the same as argv2 (0, 1, 2).
    if (argc == 3)
    {
        srand48((long int) atoi(argv[2]));
    }
    else
    {
        srand48((long int) time(NULL));
    }

    // TODO: Integer 'i' is given with an intial value of 0. This for loop will keep running as long 
    // as the value of of 'i' is smaller than the inpout given in argc2 (argv[1]). As long as the 
    // condition is true, meaning if 'i' is smaller than 'n', the loop keeps running. 
    // The output -printf in the brackets- will be a list of 'n' pseudorandom numbers.
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}