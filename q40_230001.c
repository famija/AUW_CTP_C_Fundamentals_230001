#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a[5];
   
    for(int i =0;i<5;i++){
        a[i]=get_int("Enter the value of %d:",i+1);}

printf("You Entered:");
int largest=a[0];
for(int i=0;i<5;i++){
    if(a[i]>largest)
largest=a[i];}
    printf("largest %d",largest);
    return 0;
}
