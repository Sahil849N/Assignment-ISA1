/*  Search for an element in a sorted array using binary search.*/
#include <stdio.h>
int binary(int array[], int size, int value)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = (right + left) / 2;

        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, num;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    printf("Enter the number to search\n");
    scanf("%d", &num);
    int result = binary(array, n, num);
    if (result != -1)
    {
        printf("Value %d found at index %d\n", num, result);
    }
    else
    {
        printf("Value %d not found\n", num);
    }

    return 0;
}