/*
    1
    2 3
    3 4 5
    4 5 6 7
    5 6 7 8 9
*/
#include <iostream>
using namespace std;

int main()
{
    int s=1;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",i+j-1);

        }
        printf("\n");
    }
    return 0;
}

