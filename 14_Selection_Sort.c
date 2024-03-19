/*  Sort an array using the selection sort algorithm.*/
#include <stdio.h>
int main()
{
    printf("Enter the size of the array\n");
    int size;
    scanf("%d", &size);
    int array[size];
    printf("Enter the array elements\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
    printf("Sorted array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}