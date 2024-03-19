/*  Implement a basic calculator with arithmetic operations.*/
#include <stdio.h>
#include <math.h>
int main()
{
    char ch;
    float n1, n2, res;
    while (1)
    {
        printf("Enter : +   -   *   /   ^   :   ");
        scanf(" %c", &ch);
        printf("Enter the two operands\n");
        scanf("%f%f", &n1, &n2);
        switch (ch)
        {
        case '+':
            res = n1 + n2;
            break;

        case '-':
            res = n1 - n2;
            break;

        case '*':
            res = n1 * n2;
            break;

        case '/':
            res = n1 / n2;
            break;

        case '^':
            res = pow(n1, n2);
            break;

        default:
            printf("Invalid\n");
            break;
        }
        printf("Ans : %.2f\n\n", res);
    }
    return 0;
}