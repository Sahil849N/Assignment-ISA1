/*  Perform operations like finding the largest/smallest element, sum,
and average of an array.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the size of the array\n");
    int n, ch, sum = 0, maxi = 0;
    float avg = 0;
    scanf("%d", &n);
    int array[n];
    printf("Enter Array Elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    maxi = array[0];
    while (1)
    {
        printf("Enter 1 : Sum\nEnter 2 : Average\nEnter 3 : Largest\nEnter 4 : Smallest\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            for (int i = 0; i < n; i++)
                sum += array[i];
            printf("Sum : %d\n", sum);
            break;

        case 2:
            for (int i = 0; i < n; i++)
                sum += array[i];
            avg = sum / n;
            printf("Average : %f\n", avg);
            break;

        case 3:
            for (int i = 1; i < n; i++)
            {
                if (maxi < array[i])
                    maxi = array[i];
            }
            printf("Largest : %d\n", maxi);

        case 4:
            for (int i = 1; i < n; i++)
            {
                if (maxi > array[i])
                    maxi = array[i];
            }
            printf("Smallest : %d\n", maxi);
        }
    }
    return 0;
}