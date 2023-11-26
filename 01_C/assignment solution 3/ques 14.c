#include<stdio.h>
int main()
{
    int i;
    printf("enter any number ");
    scanf("%d",&i);
    if(i<0){
        printf("number is negative");
    }
    else if(i>0){
        printf("number is positive ");
    }
    else{
        printf("number is zero ");
    }

}

