#include <stdio.h>
#include <string.h>
#define maxi 100
void concatenateStrings(char *str1, char *str2)
{
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

void copyString(char *str1, char *str2)
{
    strcpy(str1, str2);
    printf("Copied string: %s\n", str1);
}

void compareStrings(char *str1, char *str2)
{
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("String 1 is lexicographically smaller than String 2.\n");
    else
        printf("String 1 is lexicographically greater than String 2.\n");
}
int main()
{
    char str1[maxi], str2[maxi];
    int ch;
    printf("Enter string 1 : ");
    fgets(str1, maxi, stdin);
    if (strchr(str1, '\n') != NULL)
        *strchr(str1, '\n') = '\0';

    printf("Enter string 2: ");
    fgets(str2, maxi, stdin);
    if (strchr(str2, '\n') != NULL)
        *strchr(str2, '\n') = '\0';

    printf("Enter 1 : Concatenate Strings\nEnter 2 : Copy String 2 to String 1\nEnter 3 : Compare Strings\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        concatenateStrings(str1, str2);
        break;
    case 2:
        copyString(str1, str2);
        break;
    case 3:
        compareStrings(str1, str2);
        break;
    default:
        printf("Invalid choice.\n");
    }
    return 0;
}
