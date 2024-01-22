/*Write a program that accepts the radius of a circle and calculates the area and perimeter of that circle.*/

#include<stdio.h>
int main()
{ float rad,area,per;
printf("Enter the radious of a circle");
scanf("%f",&rad);
area=22.00/7.00*rad*rad;
per=2*22.00/7.00*rad;
printf(" Area of a circle:%.3f\n Perimeter of a circle:%.3f",area,per);
return 0;
}