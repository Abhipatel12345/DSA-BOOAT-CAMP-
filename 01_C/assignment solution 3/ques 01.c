#include<stdio.h>
int main()
{
    int i,sum;
    printf("enter any number ");
    scanf("%d",&i);
    if (i==0){
        printf("its a positive number ");
    }
    else if (i>0){
        printf("number is positive ");
    }
    else{
        printf("number is negative ");
    }

    return 0;
}
