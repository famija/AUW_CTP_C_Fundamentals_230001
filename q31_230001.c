#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int m = get_int("Enter marks: ");

    if (m<=0 || m>=100)
        printf("Invalid marks:");
    else if ( m>=80)
        printf("Grade A");
         else if (m>=70)
          printf("Grade B");
           else if (m>=60)
          printf("Grade C");
           else if (m>=50)
          printf("Grade D");
    else
        printf("Grade F/n");

    return 0;
}

