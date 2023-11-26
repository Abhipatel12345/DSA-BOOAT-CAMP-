// 4. Write a program to swap values of two int variables without using a third variable.

+#include<stdio.h
int main()
{
    int i,n
    printf("enter two number ");
    scanf("%d %d",&i,&n)
    i=i+n
    n=i-n;
    i=i-n;
    printf("%d d",i,n);

}
/*   EXOR
i=i^n
n=i^n
i=i^n
*/

