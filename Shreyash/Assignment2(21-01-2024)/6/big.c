/*Implement a C program to find out biggest of 3 no.s using conditional operator*/
#include<stdio.h>
int main()
{int a,b,c,big;
printf("Ente 3 numbers------>\t");
scanf("%d%d%d",&a,&b,&c);
big=(a>b)?a:b;
big=(big>c)?big:b;
printf("biggest of 3 is----> %d",big);

return 0;
}