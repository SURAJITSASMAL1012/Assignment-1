//Assignment 1:program 17//
//frequency of each digit of a number//

#include<stdio.h>

int main()
{
	int num,i,freq[10]={0};
	printf("Enter the integer:");
	scanf("%d",&num);
	
	while(num)
	{
		int rem=num%10;
		freq[rem]++;
		num/=10;
	}
	for(i=0;i<=9;i++)
	{
		if(freq[i]!=0)
		printf("frequency of %d is: %d\n",i,freq[i]);
	}
	return 0;
}
