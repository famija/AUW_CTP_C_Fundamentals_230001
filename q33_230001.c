#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int T = get_int("Enter Tempareture: ");

    if (T<20)
        printf("Cold:");
    else if ( T<=30)
        printf("Warm");

    else
        printf("Hot/n");

    return 0;
}
