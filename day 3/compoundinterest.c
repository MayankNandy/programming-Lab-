#include<stdio.h>
#include<math.h>
int main()
 {
 int p,r,t,n;
 float a,c;
 printf("enter principle value:");
 scanf("%d",&p);
 printf("enter rate");
 scanf("%d",&r);
 printf("enter time:");
 scanf("%d",&t);
 printf("enter how interest compounded");
 scanf("%d",&n);
 a=p*(pow((1+(r/n)),n*t));
 c=a-p;
 printf("Compound interest is:%f",c);
}