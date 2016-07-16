#include<stdio.h>
int main()
{
int a;
printf("\n enter a number");
scanf("%d",&a);
if(a<0)
{
printf("it is negative");
}
if(a>0)
{
printf("it is positive");
}
if(a==0)
{
printf("it is zero");
}
return 0;
}
