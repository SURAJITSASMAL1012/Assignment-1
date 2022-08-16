//Amstrong number//

#include<stdio.h>

int main()
{
	int n,r,c,sum=0,temp;
	
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	n=temp;
	
	if(n==sum)
	printf("Amstrong number");
	else
	printf("Not Amstrong number");
	
	return 0;
}
