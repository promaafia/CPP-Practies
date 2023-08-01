/*
    A
    B B
    C C C
    D D D D
    E E E E E
*/
#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {

            printf("%c ",i+64);
        }
        printf("\n");
    }
    return 0;
}

