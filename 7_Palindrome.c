/*  Check if a given number or string is a palindrome*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxi 100
int isPalindrome(int num)
{
    int d = num, r, s = 0;
    while (num)
    {
        r = num % 10;
        s = r + (s * 10);
        num = num / 10;
    }
    if (d == s)
        return 1;
    return 0;
}
int main()
{
    int ch, num, flag = 1;
    char str[maxi];
    while (1)
    {
        printf("Enter 1 : Number\nEnter 2 : String\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter a number\n");
            scanf("%d", &num);
            int result = isPalindrome(num);
            if (result == 1)
                printf("Palindrome\n");
            else
                printf("Not Palindrome\n");
            break;

        case 2:
            printf("Enter a string\n");
            scanf("%s", str);
            int size = strlen(str);
            int i = 0;
            while (i < size / 2)
            {
                if (str[i] != str[size - i - 1])
                {
                    flag = 0;
                    printf("Not palindrome\n");
                    break;
                }
                i++;
            }
            if (flag)
                printf("Palindrome\n");
            break;

        default:
            printf("Invalid Choice\n");
            break;
        }
    }
}