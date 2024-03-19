/*  Search for an element in an array using linear search.*/
#include <stdio.h>
int Search(int array[], int size, int Val)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == Val)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,num;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("Enter the number to search\n");
    scanf("%d",&num);
    int result = Search(array, n, num);
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