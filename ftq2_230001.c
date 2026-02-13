#include <stdio.h>
#include <cs50.h>
int add(int a,int b);
int main(void)
{
    int x= get_int("Enter x: ");
 int y= get_int("Enter y: ");
int result=add(x,y);
printf("Sum=%d",result);}
int add(int a, int b)

{
    return a+b;
}
