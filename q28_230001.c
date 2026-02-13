#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("Enter an integer number: ");

    if (a > 0)
        printf(" Positive\n");
    else if (a<0)
        printf(" Negative\n");
    else
        printf("Zero\n");

    return 0;
}
