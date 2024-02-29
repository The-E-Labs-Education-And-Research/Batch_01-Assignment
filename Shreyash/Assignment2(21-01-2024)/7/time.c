/*Write a program to convert time between hh:mm:ss format and total
no.of seconds
(note:- you may take the input hh,mm,ss separately, need not be in string form)
( for eg:- 1:2:30 ==> 3750 8000 ==> 2:13:20 )*/

#include<stdio.h>
int main()
{ int HH,MM,SS,sec;
	printf("Enter HH--->\n");
	scanf("%d",&HH);
	printf("Enter MM--->\n");
	scanf("%d",&MM);
	printf("Enter SS--->\n");
	scanf("%d",&SS);
	sec=SS+MM*60+HH*3600;
	printf("%d\:%d\:%d\:==>%d\t",HH,MM,SS,sec);	
	
	return 0;
	
}