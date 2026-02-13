#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a[5];
    int sum=0;
    float ave=0;

    for(int i =0;i<5;i++){
        a[i]=get_int("Enter the value of %d:",i+1);}

printf("You Entered:");
for(int i=0;i<5;i++){
    sum+=a[i];
 ave=sum/5;}
    printf("average=%.2f",ave);
    return 0;
}
