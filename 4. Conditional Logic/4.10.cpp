/*
    Write a program that read any year and display its leap year or not
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                printf("%d is leap year\n", year);
            } else{
                printf("%d is not leap year\n", year);
            }
        } else{
            printf("%d is leap year\n", year);
        }
    } else {
        printf("%d is not leap year\n", year);
    }

    return 0;
}
