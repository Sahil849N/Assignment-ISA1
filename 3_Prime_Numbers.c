/*  Determine whether a given number is prime.*/
#include <stdio.h>
#include <stdbool.h>
int main()
{
    long long int n;
    printf("Enter a number\n");
    scanf("%lld", &n);
    if (n <= 2)
    {
        printf("Not prime\n");
        return 0;
    }
    bool flag = 0;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
            flag = 1;
    }
    if (flag == 0)
        printf("Prime\n");
    else
        printf("Not prime\n");
    return 0;
}