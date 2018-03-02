#include<stdio.h>
int main()
{
char a[20];
int x,i;
printf("enter the number");
for(i=0;a[i]!='\0';i++)
{
x=(int)(a[i]);
if(x%2!=0)
{
printf("\n%c",a[i]);
}
}
return 0;
}
