#include<stdio.h>
int main()
{
    int i,d,sum;
    printf("enter any number ");
    scanf("%d",&i);
    printf("enter any number ");
    scanf("%d",&d);
    if(i>d){
        sum = i-d;
        printf("%d difference of between two number ",sum);
    }
    else{
        printf("please enter correct digit %d ",i);
    }
    return 0;


}
