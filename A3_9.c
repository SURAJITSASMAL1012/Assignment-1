// assignment 3:Program 9//
// Fibonacci series AND Factorial of a number//

#include <stdio.h>
int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);
}
int factorial(int num1)
{
	if (num1 == 0)
	{
		return 1;
	}
	else if (num1 == 1)
	{
		return 1;
	}
	else
		return num1 * factorial(num1 - 1);
}

int main()
{
	while (1)
	{
		int a, i, n1, n2;
		printf("\nEnter your choice: \n");
		printf("\n1.Generate fibonacci Number\n2.Factorial of any number\n");
		scanf("%d", &a);
		printf("Chosen option is: %d\n", a);
		switch (a)
		{
		case 1:
			printf("Enter number of elements in the series: ");
			scanf("%d", &n1);
			printf("The No. is: \n");

			printf("%d\t", fib(n1 - 1));

			break;

		case 2:
			printf("Enter the number: ");
			scanf("%d", &n2);
			printf("The factorial of %d is: %d", n2, factorial(n2));
			break;

		default:
			printf("Wrong Choice!");
		}
	}
	return 0;
}
