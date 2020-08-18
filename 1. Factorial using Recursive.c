#include<stdio.h>

int factorial(int);

void main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("\nFactorial: %d\n", factorial(num));
}

int factorial(int i)
{
	int f;
	if (i==1)
		return 1;
	else
		f = i*factorial(i-1);
	return f;
}
