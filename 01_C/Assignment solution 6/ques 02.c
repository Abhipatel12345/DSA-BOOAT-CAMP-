#include <stdio.h >
int main ()
{
    int i,n,sum=0;
    printf("enter any number  ");
    scanf("%d",&i);
    for(n=1;n<=i;n++){
        printf(" all odd number %d \n ",2*n-1);
        sum+=2*n-1;
    }
    printf("\n sum of odd natural number  : %d ",sum);
    return 0;
}

