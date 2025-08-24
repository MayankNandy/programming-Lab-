#include<stdio.h>
int main()
{ int t1,t2;
 float f,c;
 printf("Enter temperature in °F:");
 scanf("%d",&t1);
 c=(t1-32)*5/9;
 printf("The temperature in °C is:%f°C\n",c);
 printf("Enter temperature in °C:");
 scanf("%d",&t2);
 f=(9/5*t2)+32;
  printf("The temperature in °F is:%f°F\n",f);
return 0;
}