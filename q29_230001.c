#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("Enter an integer number: ");

    if (a >=1 && a<=100)
        printf(" In range\n");

    else
        printf("Out of range\n");

    return 0;
}
