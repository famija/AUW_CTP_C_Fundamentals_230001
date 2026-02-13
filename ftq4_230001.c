#include <stdio.h>
#include <cs50.h>
int max(int a,int b);
int main(void)
{
    int x= get_int("Enter x: ");
 int y= get_int("Enter y: ");

printf("Max=%d",max(x,y));}
int max(int a, int b)

{if(a>b)
    return a;
    else
    return b;
}
