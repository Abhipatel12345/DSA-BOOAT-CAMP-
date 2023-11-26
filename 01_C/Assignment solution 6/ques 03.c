#include <stdio.h >
int main ()
{
    int i,n,sum=0;
    printf("enter any number ");
    scanf("%d",&i);
    for(n=2;n<=i;n=n+2){

        sum=sum+n;
    }
    printf("%d",sum);
    return 0;
}
