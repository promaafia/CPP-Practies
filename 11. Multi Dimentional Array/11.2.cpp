/*
    11.2. Write a program that read and display a matrix
*/


/*
    11.1. Write a program that read and display read and display a 2D array
*/


#include <iostream>
using namespace std;

int main()
{
    int m1[10][10], m2[10][10], r, c;

    printf("Row: ");
    scanf("%d", &r);
    printf("Col: ");
    scanf("%d", &c);

    printf("1st matrix elements: \n");
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

