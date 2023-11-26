//3. Write a program to check whether a given number is there in the Fibonacci series or not
#include<stdio.h>
int main ()
{
    int n,c,b=1,a=0,e;
    printf("enter any number ");
    scanf("%d",&n);
    printf("enter any number ");
    scanf("%d",&e);
    if(n<=e){

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
}

