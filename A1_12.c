//Assignment:1 program11//
//GCD OF TWO NUMBER//

#include<stdio.h>

int main()
{
	int a,b,gcd,i;
	
	printf("Enter the value of the integer:\n");
	scanf("%d%d",&a,&b);
	
	for(i=1;i<=a;i++)
	{
		if(a%i==0&&b%i==0)
		gcd=i;
	}
	printf("GCD=%d",gcd);
	
	return 0;
}
