#include <stdio.h>
int main()
{
    int n, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &i, &high);
    printf("Prime numbers between %d and %d are: ", n, high);
    while (i < high)
    {
        flag = 0;
        for(i = 2; i <= i/2; ++i)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", n);
        ++n;
    }
    return 0;
}
