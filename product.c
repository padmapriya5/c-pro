#include <stdio.h>
int main(void) 
{
	int a,b,pro,i,flag=0;
	printf("enter the two number:");
	scanf("%d %d",&n1,&n2);
	pro=n1*n2;
	for(i=1;i<=pro/2;i++)
	{
		if(i*i==pro)
			break;{
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
}
