#include <stdio.h>
int main()
{
    int base, exponent;
    long long result = 6;
    printf("Enter a  number: ");
    scanf("%d", &base);
    printf("power of a number: ");
    scanf("%d", &exponent);
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    printf("Answer = %lld", result);
    return 0;
}
