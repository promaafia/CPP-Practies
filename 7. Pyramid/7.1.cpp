/*
    1
    1 2
    1 2 3
*/
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i<=3; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
