#include<stdio.h>
#include<cs50.h>
int main(void)
{int n= get_int("Enter an integer:");
for(int i=n; i>=1;i--){
    for(int j=0;j<i;j++)
printf("*");
printf("\n");
return 0;
}
}
