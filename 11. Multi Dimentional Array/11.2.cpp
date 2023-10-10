/*
    11.2. Write a program that read and display a matrix
*/


#include <iostream>
using namespace std;

int main()
{
    int mat[10][10], r, c;

    printf("Row: ");
    scanf("%d", &r);
    printf("Col: ");
    scanf("%d", &c);

    printf("matrix elements: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", mat[i][j]);

        }
        printf("\n");
    }
    return 0;
}

