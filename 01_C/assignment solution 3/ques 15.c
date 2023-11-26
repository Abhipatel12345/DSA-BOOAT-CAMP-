#include<stdio.h>
int main()
{
    char i;
    printf("enter any number");
    scanf("%c",&i);
    if(i>64 && i<91){
        printf("upper case latter ");
    }
    else if(i>96 && i<123){
        printf("lower case latter ");
    }
    else{
        printf("any special character ");
    }
}
