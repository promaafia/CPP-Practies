/*
    0
    1 0
    0 1 0
    1 0 1 0
    0 1 0 1 0
*/
#include <iostream>
using namespace std;

int main()
{

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            int s= i+j-1;
            if(s%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}

