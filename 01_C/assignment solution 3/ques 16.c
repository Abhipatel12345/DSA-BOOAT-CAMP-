#include<stdio.h>
int main()
{
    int i;
    printf("enter any number ");
    scanf("%d",&i);
    if(i<13 && i>0){
            if(i=i%3==0){
                    printf(" 31 days ");

            }
            else{
                printf(" 30 days");
            }
    }
    else{
        printf("please enter correct number ");

    }
}
