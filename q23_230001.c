#include<stdio.h>
#include<cs50.h>
int main(void)
{int n= get_int("Enter an integer:");
for(int i=1; i<=n;i++){
    for(int j=0;j<i;j++)
printf("*");
printf("\n");
return 0;
}
}
