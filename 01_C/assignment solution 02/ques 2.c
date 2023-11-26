// Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int i;
    printf("enter any number ");
    scanf("%d",&i);
    i=i/10;
    printf("%d",i);
}
