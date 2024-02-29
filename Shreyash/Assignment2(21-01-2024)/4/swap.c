/*Swapping of two no.s (with, without temporary, one line code with xor operator*/
#include<Stdio.h>
int main()
{ int num1=33,num2=44;
printf("Number before swapping --------->%d %d\n",num1, num2);
num1=num1+num2; // num1= 77
num2=num1-num2; // num2 =33
num1=num1-num2; // num1=44

printf("Number after swapping ---> %d %d\n",num1, num2);
return 0;
}