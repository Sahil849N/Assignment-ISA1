/*  Perform matrix addition, subtraction, multiplication, and transpose.*/
#include <stdio.h>
#include <stdlib.h>
#define row 2
#define col 2
void add(int mat1[row][col], int mat2[row][col])
{
    int ans[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            ans[i][j] = mat1[i][j] + mat2[i][j];
    }
    printf("Matrix Addition : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d  ", ans[i][j]);
        printf("\n");
    }
}
void sub(int mat1[row][col], int mat2[row][col])
{

    int ans[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            ans[i][j] = mat1[i][j] - mat2[i][j];
    }
    printf("Matrix Subtraction : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d  ", ans[i][j]);
        printf("\n");
    }
}
void mul(int mat1[row][col], int mat2[row][col])
{
    int ans[row][col];
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < row; k++)
                ans[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
    printf("Matrix Multiplication : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d  ", ans[i][j]);
        printf("\n");
    }
}
void trans(int mat1[row][col], int mat2[row][col])
{
    int ans1[row][col];
    int ans2[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < row; k++)
            {
                ans1[j][i] = mat1[i][j];
                ans2[j][i] = mat2[i][j];
            }
        }
    }
    printf("Matrix Transpose : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d  ", ans1[i][j]);
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d  ", ans2[i][j]);
        printf("\n");
    }
}
int main()
{
    int ch;
    int mat1[row][col], mat2[row][col];
    printf("Enter the elements of the first matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter the elements of the second matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &mat2[i][j]);
    }
    while (1)
    {
        printf("Enter 1 : Addition\nEnter 2 : Subraction\nEnter 3 : Multiplication\nEnter 4 : Transpose\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            add(mat1, mat2);
            break;

        case 2:
            sub(mat1, mat2);
            break;

        case 3:
            mul(mat1, mat2);
            break;

        case 4:
            trans(mat1, mat2);
            break;
        }
    }
    return 0;
}