//Assignment1:program 7(i)//
//Divisor of a number and check whether the number is perfect or not//

#include<stdio.h>

int main()
{
	int n,i,sum=0;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("Factors of the given number:\t");
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
			sum=sum+i;
		}
	}
	
	if(n==sum)
	printf("%d is a perfect number\t",n);
	else
	printf("%d is not a perfect number\n",n);
	
	return 0;
	
}
