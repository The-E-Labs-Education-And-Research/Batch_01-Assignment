/*Accept any two numbers, if the first number is greater than second number then 
print the difference of these two numbers, otherwise print their sum. Write this program using ternary operator.*/

#include<stdio.h>
int main()
{
int num1,num2;       // delcler 2 variables
printf("Enter 2 numbers if the first number is greater than second number then\tdifference of these two numbers will be peinted, otherwise sum will be printed\n");
scanf("%d %d",&num1,&num2);
num1>num2?printf("%d",(num1-num2)):printf("%d",(num1+num2));
return 0;
}