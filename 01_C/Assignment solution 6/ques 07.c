//Write a program to count digits in a given number

#include<stdio.h>
#include<math.h>
int main()
{
    long long i;
    int n=1;
    printf("enter any number ");
    scanf("%d",&i);
    while(i>n)
    {
        i/=10;
        n++;
    }
    printf("%d",n);
}
