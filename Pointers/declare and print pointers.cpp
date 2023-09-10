#include <iostream>

using namespace std;

int main()
{
    int a=5;
    int *p;
    //a=5;
    p=&a;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", &a);

    return 0;
}
