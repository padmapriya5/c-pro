#include <stdio.h>
int main()
{
    int n, number = 0, remainder,i ;
    printf("Enter an number: ");
    scanf("%d", &n);
    i = n;
    while( n!=0 )
    {
        number = n%10;
        number = number*10 +i;
        n /= 10;
    }
    if (i == number)
        printf("%d is a palindrome.", number);
    else
        printf("%d is not a palindrome.",i);
    return 0;
}
