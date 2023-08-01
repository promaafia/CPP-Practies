/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/
#include <iostream>
using namespace std;

int main()
{

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            int s= i+j-2;
            if(s%2==0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}

