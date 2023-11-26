//Write a program to calculate factorial of a number


#include <stdio.h >
int main ()
{
    int i,n,sum=1;
    printf("enter any number  ");
    scanf("%d",&i);
    for(n=1;n<=i;n++){
        sum=sum*n;
    }
    printf("the factorial of %d %d is %d",i,n,sum);
    return 0;
}

