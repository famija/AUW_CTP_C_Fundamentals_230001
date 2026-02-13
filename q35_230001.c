#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int y = get_int("Enter year: ");

    if (y<=0)
        printf("Invalid year");
    else if ( y%400==0)
        printf("Leap year");
         else if (y%100==0)
          printf("Not leap Year");
           else if (y%4==0)
          printf("leap year");
        
    else
        printf("Not leap year/n");

    return 0;
}
