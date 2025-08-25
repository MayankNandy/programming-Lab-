#include<stdio.h>
int main()
{
    int l,b;
    printf("enter length:");
    scanf("%d",&l);
    printf("enter breadth:");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    printf("perimeter of the rectangle is:%d\n",p);
    printf("area of the rectangle is:%d\n",a);
}