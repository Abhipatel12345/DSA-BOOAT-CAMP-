#include<stdio.h>
int main()
{
    int a,c,r,arm=0;
    printf("enter any number ");
    scanf("%d",&a);
    c=a;
    while(a>0)
    {
        r=a%10;    //store reminder in r veriable
        arm = (r*r*r)+arm ;
        a=a/10;
    }
    if(c==arm)
    printf("%d is armstrong number ",c);
    else
    printf("%d is not a armstrong number ",c);
}
