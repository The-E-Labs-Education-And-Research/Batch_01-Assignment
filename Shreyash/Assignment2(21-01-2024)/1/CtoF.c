/*Write a code that enters temperature in Celcius and converts that into Fahrenheit.*/
#include<stdio.h>
int main()
{ float temp_C,temp_F;
printf("Enter temperature in Celcius ------>");
scanf("%f", &temp_C);
temp_F= temp_C*9.0/5.0+32;
printf("temperature in C^0------>%.3f\n temperature in F^0------>%.3f",temp_C,temp_F);

return 0;
}