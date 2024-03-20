/*  Perform operations like finding the largest/smallest element, sum,
and average of an array.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter the size of the array\n");
    int n, ch, sum = 0, maxi = 0, mini = 0;
    float avg = 0;
    scanf("%d", &n);
    int array[n];
    printf("Enter Array Elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    maxi = mini = array[0];
    while (1) 
    {
        printf("Enter 1 : Sum\nEnter 2 : Average\nEnter 3 : Largest\nEnter 4 : Smallest\nEnter 0 : Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                for (int i = 0; i < n; i++)
                    sum += array[i];
                printf("Sum : %d\n", sum);
                break;

            case 2:
                for (int i = 0; i < n; i++)
                    sum += array[i];
                avg = ((float)sum )/((float) n);
                printf("Average : %.2f\n", avg);
                break;

            case 3:
                for (int i = 1; i < n; i++) {
                    if (maxi < array[i])
                        maxi = array[i];
                }
                printf("Largest : %d\n", maxi);
                break;

            case 4:
                mini = array[0];
                for (int i = 1; i < n; i++) {
                    if (mini > array[i])
                        mini = array[i];
                }
                printf("Smallest : %d\n", mini);
                break;

            case 0:
                exit(0);
                break;

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
