//Assignment1:program 2//
//product of digits of an integer//

#include<stdio.h>
int main()
{
	int n,r,prd=1;
	printf("Enter the value of the integer:");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		prd=prd*r;
		n=n/10;
	}
	printf("product of the digit:%d",prd);
	return 0;
}
