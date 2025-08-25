#include<stdio.h>
#include<math.h>
int main()
{
    float x;
    float f,c;
    printf("enter a decimal number");
    scanf("%f",&x);
    f=floor(x);
    c=ceil(x);
    printf("the floor of the no. is:%f\n",f);
    printf("the ceiling of the no. is:%f\n",c);
    return 0;
}