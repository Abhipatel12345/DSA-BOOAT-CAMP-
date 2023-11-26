//Write a program to calculate sum of squares of first N natural numbers

#include <stdio.h >
int main ()
{
    int i,n,sum=0;
    printf("enter any number ");
    scanf("%d",&i);
    for(n=0;n<=i;n++){
            sum=sum+n*n;
    }
    printf("%d",sum);
    return 0;
}

