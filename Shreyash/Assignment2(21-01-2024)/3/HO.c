/*Write a program to accept a number in decimal and print the number in octal and hexadecimal.*/
#include<stdio.h>
int main()
{ int i;
printf("Enter a number---------->>\t");
scanf("%d",&i);
printf("Number in Hex------->%x\n",i);
printf("Number in Oct------->%o",i);

return 0;
}
