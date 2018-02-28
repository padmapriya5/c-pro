#include<stdio.h>
int main()
{
	int rem,rev=0,org,n;
	printf("enter the string");
	org=n;
	while(n!=0)
	{
	rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
}
if(org==rev)
	printf("yes");
	else
		printf("no");
		return 0;
	}

