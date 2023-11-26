/* Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
    int i,n,s;
    printf("enter any number ");
    scanf("%d",&i); //123
    n=i/10;  //12
    s=i%10;  //3
    s=0;

    printf("%d%d",n,s);

}
