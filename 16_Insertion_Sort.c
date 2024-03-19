/*  Sort an array using the insertion sort algorithm.*/
#include <stdio.h>
int main()
{
    printf("Enter the size of the array\n");
    int size;
    scanf("%d", &size);
    int Array[size];
    printf("Enter the array elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &Array[i]);
    for (int i = 1; i < size; i++)
    {
        int insertIndex = i;
        int currentValue = Array[i];
        int j = i - 1;

        while (j >= 0 && Array[j] > currentValue)
        {
            Array[j + 1] = Array[j];
            insertIndex = j;
            j--;
        }
        Array[insertIndex] = currentValue;
    }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", Array[i]);
    }

    return 0;
}