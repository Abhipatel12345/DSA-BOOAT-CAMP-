#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter 1 ");
    scanf("%d",&a);
    printf("enter 2 ");
    scanf("%d",&b);
    printf("enter 3 ");
    scanf("%d",&c);
    printf("enter 4 ");
    scanf("%d",&d);
    printf("enter 5 ");
    scanf("%d",&e);
    e=a+b+c+d+e;
    if(e>=165 && e<500){

            printf("student is passed %d",e);
        }
    else{
        printf("student is failed %d",e);
    }


}
