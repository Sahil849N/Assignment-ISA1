/*  Calculate the sum of digits of a given number.*/
#include <stdio.h>
int main()
{
    int n;
    int s = 0, d = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        s = s + d;
        n = n / 10;
    }
    printf("Sum : %d\n", s);
    return 0;
}