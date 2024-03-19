/*  Sort an array using the bubble sort algorithm.*/
#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("Enter the size of the array\n");
    int n;
    scanf("%d", &n);
    int array[n];
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        bool swap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swap = true;
            }
        }
        if (!swap)
        {
            break;
        }
    }
    printf("Sorted array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}