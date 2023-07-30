/*
Write a program to generate a simple arithmetic calculator
	hints:
	enter two numbers: 6 5
	select the menu:
	1. Add
	2. Subtract
	3. Multiply
	4. Divide
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nSelect the menu: ");
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");

    int n;
    printf("\n\nSelect Operation: ");
    scanf("%d", &n);

    if(n == 1){
        printf("\n\nSum = %d", num1+num2);
    }
    else if(n == 2){
        printf("\n\nSubtract = %d", num1-num2);
    }
    else if(n == 3){
        printf("\n\nMultiply = %d", num1*num2);
    }
    else if(n == 4){
        printf("\n\nDivide = %d", num1/num2);
    }
    return 0;
}
