#include<stdio.h>
int main()
{
    int i;
    printf("enter any number ");
    scanf("%d",&i);
    if(i<=999 && i>100){
        printf("given number is three digit number ");
    }
    else{
        printf("this number is not a three digit number ");
    }
}
