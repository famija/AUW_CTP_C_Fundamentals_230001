#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = get_int("Enter a: ");
    int b = get_int("Enter b: ");
int c= get_int("Enter c: ");
    if (a >=b && a>=c)
        printf("%d",a);
    else if (b>=c && b>=a)
        printf("%d\n",b);
    else
        printf("%d\n",c);

    return 0;
}



