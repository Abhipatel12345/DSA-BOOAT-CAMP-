//Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
int main ()
{
    int i,n,sum=0;
    printf("enter any number ");
    scanf("%d",&i);
    for(n=1;n<=i;n++){
        sum=sum+n*n*n;
    }
    printf("%d",sum);
    return 0;

}

