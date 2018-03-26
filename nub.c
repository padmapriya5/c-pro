#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int arr[100],i,sum=0;
clrscr();
printf("Enter the string:");
gets(str);
for(i=0;i<strlen(str);i++)
{
arr[i]=str[i];
sum=sum+arr[i];
}
printf("The password is:%c",sum/i);
getch();
}
