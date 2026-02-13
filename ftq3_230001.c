#include <stdio.h>
#include <cs50.h>
void check(int n);
int main(void)
{
    int a= get_int("Enter a: ");
 check(a);}
 void check(int n)
{
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

