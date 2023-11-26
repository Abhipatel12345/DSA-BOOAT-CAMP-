#include<stdio.h>
int main()
{
    int h,a,b,i;
    printf("enter any number ");
    scanf("%d %d",&a,&b);
    h=a<b?a:b;
    for(i=2;i<=h;i++){
        if(a%i==0 && b%i==0)
            break;
    }
    if(i==h+1){
        printf("%d and %d number are co prime ",a,b);
    }
    else
        printf("%d and %d number are not co prime ",a,b);
}
