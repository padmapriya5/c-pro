#include <stdio.h>
int main(void) 
{
int n,emainder,product=1;
scanf("%d",&n);
while(n!=0)
{
emainder=n%10;
product=product*emainder;
n=n/10;
}
printf("\n%d",product);
return 0;
}
