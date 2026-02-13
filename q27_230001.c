#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("Enter an integer number: ");

    if (a%2== 0)
        printf(" Even\n");
    else if (a==0)
        printf(" Zero\n");
    else
        printf("odd\n");

    return 0;
}
