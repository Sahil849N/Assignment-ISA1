/* Calculate the factorial of a given number. */
#include <stdio.h>
#include <math.h>
int main()
{
    long long int n, f = 1;
    printf("Enter the number\n");
    scanf("%lld", &n);
    if (n < 0)
    {
        printf("Invalid\n");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("Factorial of %lld  : %lld", n, f);
    return 0;
}