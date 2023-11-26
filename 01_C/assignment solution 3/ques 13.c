#include<stdio.h>
int main()
{
    int i;
    printf("enter any number ");
    scanf("%d",&i);
    if (i%3==0 && i%7==0){
        printf("the number is completely divisible by 3 and 7 ");
    }
    else{
        printf("please enter correct number ");
    }
}

