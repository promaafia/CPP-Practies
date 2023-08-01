/*
    A
    A B
    A B C
    A B C D
    A B C D E
*/
#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {

            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}

