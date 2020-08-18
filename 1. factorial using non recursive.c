#include<stdio.h>

int factorial(int);

void main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("\nFactorial: %d\n", factorial(num));
}

int factorial(int n)
{
	int fact = 1, i;
	for (i=1;i<=n;i++)
		fact = (fact*i);

	return fact;
}
