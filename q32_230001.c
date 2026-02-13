#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int age = get_int("Enter age: ");

    if (age<0)
        printf("Invalid age:");
    else if ( age<=12)
        printf("Child");
         else if (age<=19)
          printf("Teen");
           else if (age<=59)
          printf("Adult");
        
    else
        printf("Senior/n");

    return 0;
}
