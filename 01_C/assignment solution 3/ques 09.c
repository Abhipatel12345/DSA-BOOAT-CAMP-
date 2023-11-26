#include<stdio.h>
int main ()
{
    int a,b,c ;
    printf(" first number ");
    scanf("%d",&a);
    printf(" first number ");
    scanf("%d",&b);
    printf(" first number ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("greater number is %d",a);
    }
    else if(b>a && b>c){
        printf("greater number is %d",b);
    }
    else{
        printf("greater num is %d",c);
    }
}
