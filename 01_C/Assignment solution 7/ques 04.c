// 4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int h,a,b;
    printf("enter any number ");
    scanf("%d%d",&a,&b);
    for(h=a<b?a:b;h>=1;h--){
        if(a%h==0 && b%h==0)
            break;
    }
    printf("%d",h);
}

