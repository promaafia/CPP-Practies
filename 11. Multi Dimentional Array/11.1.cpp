/*
    11.1. Write a program that read and display a 2D array
*/


#include <iostream>
using namespace std;

int main()
{
    int m1[10][10], r, c;

    printf("Row: ");
    scanf("%d", &r);
    printf("Col: ");
    scanf("%d", &c);

    printf("matrix elements: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &m1[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", m1[i][j]);

        }
        printf("\n");
    }
    return 0;
}

