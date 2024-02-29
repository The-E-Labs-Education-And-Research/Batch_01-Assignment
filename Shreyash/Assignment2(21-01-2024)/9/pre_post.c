/*Implement a C program, where is a=10,b=20,c=30 evaluate the following
d=++a,++b,++c,a+5;
d=(++a,++b,++c,a+5);*/

#include<stdio.h>
int main()
{ int a=10,b=20,c=30;
printf("d=(++a,++b,++c,a+5)=%d\n",(++a,++b,++c,a+5));
printf("d=(++a,++b,++c,a+5)=%d",(++a,++b,++c,a+5));
	
return 0;	
}
