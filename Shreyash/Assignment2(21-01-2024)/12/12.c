#include<stdio.h>
int main ()
{
int a,b;
int c,mod;
printf("Enter the values of a b c");
scanf("%d %d %d", &a,&b,&c);
switch(c)
{
case 1:
 printf("%f",a+b);
 break;
case 2:
printf("%f",a-b);
 break;
case 3:
printf("%f",a*b);
case 4:
mod=a%b;
printf("%d",mod);
case 5:
printf("%f",a/b);
 break;
default:
printf("wrong choice");
 break;
}


return 0;
}