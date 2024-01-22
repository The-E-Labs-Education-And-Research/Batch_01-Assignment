/*Write a program that accepts marks in five subjects and calcuates the total percentage marks.*/
#include<stdio.h>
int main()
{
float Science,Maths,Hindi,Marathi,English;
float per;
printf("Enter marks in five subjects----->\t");
scanf("%f %f %f %f %f",&Science,&Maths,&Hindi,&Marathi,&English);
per=(Science+Maths+Hindi+Marathi+English)/500*100;
printf("total percentage marks---->%2.2f \%",per);	
return 0;
}
