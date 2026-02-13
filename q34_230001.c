#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int age = get_int("Enter age: ");
 int ct= get_int("Enter Citizenship, 1 for Yes, 2 for No: ");

    if (age>=18){
        if ( ct==12)
        printf("Eligible for vote");
         else
          printf("Not citizen,not eligible for vote");}

    else
        printf("Underage");

    return 0;
}
