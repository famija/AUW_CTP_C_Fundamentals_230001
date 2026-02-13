#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int a[5];
    int count=0;

    for(int i =0;i<5;i++){
        a[i]=get_int("Enter the value of %d:",i+1);}

printf("You Entered:");

for(int i=0;i<5;i++){
    if(a[i]>0)
count++;}
    printf("Positive count %d",count);
    return 0;
}
