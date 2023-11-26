#include<stdio.h>
int main()
{
    int i,sum =0,n;
    printf("enter a number \n",i);
    scanf("%d",&i);
    n=0;
    while(n<=i)
    {
        sum=sum+n;
        n++;
    }
    printf("%d",sum);
    return 0;
}

