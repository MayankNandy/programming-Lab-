#include<stdio.h>
int main()
{
    int x;
    printf("enter a no. To print it's multiplication table:");
    scanf("%d",&x); int i=1;
    for(i=1;i<=10;i++)
        printf("%d\n",x*i);
    return 0;
}