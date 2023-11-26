/* Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int n,i,sum=0,a;
    printf("enter any number ");
    scanf("%d",&i);
    a=i;       //123
    while(i>0){
        n=i%10; // 3
        sum=sum+n; //0+3
        i=i/10;
    }
    a=a*100+sum;
    printf("%d",a);
}

