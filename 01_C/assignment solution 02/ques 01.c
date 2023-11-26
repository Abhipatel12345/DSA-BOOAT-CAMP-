// Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int i;
    printf("enter any number %");
    scanf("%d",&i);
    i=i%10;
    printf("unit digit of given number %d",i);
}
