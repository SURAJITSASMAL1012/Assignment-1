//Assignment1:program14//
//One number raised to the power of the another//

#include<stdio.h>

int main()
{
	int x,y,i,res=1;
	
	printf("Enter the value of the two number:\t");
	scanf("%d%d",&x,&y);
	
	for(i=1;i<=y;i++)
	{
		res*=x;
	}
	printf("%d",res);
	
	return 0;
	
}
