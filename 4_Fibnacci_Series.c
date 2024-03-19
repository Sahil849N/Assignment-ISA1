/*  Generate the Fibonacci series up to a certain limit*/
#include <stdio.h>
int main()
{
    int n, p = 0,q = 1, fibo=0;
    printf("Enter the limit of series\n");
    scanf("%d", &n);
    if (n <= 0)
        printf("Invalid\n");
    else if (n == 1)
        printf("0   ");
    else
    {
        printf("0   1   ");
        for (int i = 2; i < n; i++)
        {
            fibo = p + q;
            p = q;
            q = fibo;
            printf("%d  ", fibo);
        }
    }
    return 0;
}