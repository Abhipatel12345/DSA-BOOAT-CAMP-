// 7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>
int main ()
{
    int a,b,i,n;
    printf("enter first number ");
    scanf("%d",&a);
    printf("enter second number ");
    scanf("%d",&b);
    for(i=a+1;i<=b-1; i++){
        for(n=2;n<i;n++)
            if(i%n==0)
                break;
    if(n==i)
        printf("%d ",i);
    }

}
