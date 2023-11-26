// 1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main ()
{
    int n,c,b=1,a=0;
    printf("enter any number ");
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("%d fibonaci is  %d",n,n);
        return 0;
    }
    for (int i=2; i<=n ;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d fibonaci number is  %d",n,c);
}
