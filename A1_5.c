//Assignment:program 5//
//prime number //

#include<stdio.h>

int main()
{
	int n,i,flag=0;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0&&n!=1)
	{
		printf("prime\n");
	}
	else
	{
		printf("Not prime\n");
	}
	
	return 0;
}
