//print number 11 in various formats e.g. dec, hex (capital/small), octal 
//also you can take input from user for the number using scanf
   
   
   #include<stdio.h>
   int main()
   {
int a;
   scanf("%d", &a);
   printf("In decimal ---> %d\n",a);
   printf("In hex---> %x\n",a);
   printf("In octal ---> %o\n",a);
   printf("In Hex ---> %X\n",a);
   
   return 0;
   }