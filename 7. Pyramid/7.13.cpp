/*
    1 1 1 1 1
    0 0 0 0
    1 1 1
    0 0
    1
*/
#include <iostream>
using namespace std;

int main()
{
    for(int i=5; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {

            if(i%2==0)
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
