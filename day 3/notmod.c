#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter a no.:");
    scanf("%d",&n);
    d=n-((n/10)*10);
    printf("The last digit of the number is:%d",d);
}