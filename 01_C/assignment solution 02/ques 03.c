// Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int i,n,temp;
    printf("enter any two number ");
    scanf("%d %d",&i,&n);
    temp=i;
    i=n;
    n=temp;
    printf("i=%d n=%d",i,n);
}
