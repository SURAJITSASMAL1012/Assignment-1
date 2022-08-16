//Reverse of a number & Pallimdrome number//
//Assignment 1:program 1//
#include<stdio.h>

int main()
{
	int n,r,sum=0,temp;
	printf("Enter the value of the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=temp;
	printf("Reverse of %d number is:%d\t",n,sum);
	if(n==sum)
	printf("pallindrome number\t");
	else
	printf("Not pallindrome number\t");
	
	return 0;
}
