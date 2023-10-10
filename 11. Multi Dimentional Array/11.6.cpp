/*
    11.6. Write a program that add and multiply two matrices
*/


#include <iostream>
using namespace std;

int main()
{
    int m1[10][10], m2[10][10], result[10][10], r, c;

    printf("Row: ");
    scanf("%d", &r);
    printf("Col: ");
    scanf("%d", &c);
    printf("\n");

    printf("1st matrix elements: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }printf("\n");

    printf("2nd matrix elements: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    // Add Matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("\n");
    printf("Add Matrix: ");
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", result[i][j]);

        }
        printf("\n");
    }

    // Multiply Matrix

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            result[i][j] = m1[i][j] * m2[i][j];
        }
    }
    printf("\n");
    printf("Multiply Matrix: ");
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", result[i][j]);

        }
        printf("\n");
    }
    return 0;
}
