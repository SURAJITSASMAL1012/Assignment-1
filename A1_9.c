//Assignment1:program 9//
//Factorial of a number//

#include<stdio.h>

int main()
{
	float n,i,fact=1;
	
	printf("Enter the number:");
	scanf("%f",&n);
	for(i=n;i>=1;i--)
	{
		fact=fact*i;
	}
	
	printf("Factorial of number %f is %f",n,fact);
	return 0;
	
}
