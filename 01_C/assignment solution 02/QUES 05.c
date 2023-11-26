// 5. Write a program to input a three-digit number and display the sum of the digits
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter any two number ");
    scanf("%d",&i);
    while(i>0)
    {
        n=i%10;
        sum=sum+n;
        i=i/10;

    }printf("%d",sum);

}
