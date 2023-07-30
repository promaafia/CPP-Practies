/*
    Write a program to input angles of a triangle and check whether triangle is valid or not
*/
#include <iostream>
using namespace std;

int main()
{
    int angle1, angle2, angle3, sum;
    printf("Enter 1st Angle: ");
    scanf("%d", &angle1);
    printf("Enter 1st Angle: ");
    scanf("%d", &angle2);
    printf("Enter 1st Angle: ");
    scanf("%d", &angle3);

    sum = angle1 + angle2 + angle3;

    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0){
        printf("\nTriangle is valid");
    }
    else{
        printf("\nTriangle is not valid");
    }
    return 0;
}
