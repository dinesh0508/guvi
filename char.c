#include<stdio.h>
int main()
{
char a[5]='a','e','i','o','u';
char str;
printf("\n enter the character");
scanf("%d",&str);
for(int i=0;i<=4;i++)
{
if(str==a[i])
{
printf("\n it is vowel");
}
else
{
printf("\n it is consonant");
}
}
return 0;
}
