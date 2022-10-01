/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//C program to check whether given floating point number is valid or not
//2115079

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char buffer[100];
    double value;
    char *endptr;
    printf("Enter the floating point number\n");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        return -1;
    }
    value = strtod(buffer, &endptr);
    if ((*endptr == '\0') || (isspace(*endptr) != 0))
    {
         printf("Valid\n");
    }
    else
    {
        printf("invalid\n");
    }

    return 0;      
}