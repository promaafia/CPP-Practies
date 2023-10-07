/*
    10.15. Write a program that display first n prime numbers using array
*/

#include <iostream>
using namespace std;

int main()
{
	printf("Enter the number: ");
	int n;
	scanf("%d", &n);
	int a[n];
	int index = 0;
	int i, j;

	for (i = 2; index < n; ++i) {
		for (j = 2; j < i; ++j) {
			if (i % j == 0) {
				break;
			}
		}

		if (i == j) {
			a[index] = i;
			index++;
		}
	}

	for (i = 0; i < n; ++i) {
		printf("%d ",a[i]);
	}

	return 0;
}
