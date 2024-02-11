/*4 Write a C program to find the largest and smallest element of an array.*/
#include<stdio.h>
int main()
{
int arr[10]={1,2,3,4,5,6,7,8,11};
int i,big=1,small=1;
//printf("Enter a 10 numbers as input");
//for(i=0;i<10;i++){
//scanf("%d",&arr[i]);
//}
printf("Array Elements -->");
for(i=0;i<10;i++){
printf("%d\t",arr[i]);
}
big=small=arr[0];
for(i=1;i<9;i++){
big=big<arr[i]?arr[i]:big;
small=small>arr[i]?arr[i]:small;
}
printf("\nlargest number->%d\nsmallest number------->%d",big,small);

return 0;
}