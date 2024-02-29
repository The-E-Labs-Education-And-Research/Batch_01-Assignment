//take any number as an input and use escape sequences. e.g. \b, \n, \r, \a, \t.
//Note: \v and \f cannot be used in normal programming it is used only in file operations.
#include<stdio.h>
int main()
{ int a;
printf("enter a number\n");
scanf("%d", &a);
printf("\b %d", a);
printf("\r %d", a);
printf("\a %d", a);
printf("\t %d", a);
return 0;
}