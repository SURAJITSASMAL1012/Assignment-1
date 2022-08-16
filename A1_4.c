//Assignment 1:program 4//


#include<stdio.h>
int reverse(int num)
{
	int rev=0;
	while(num)//this loop goes on untill num=0
	{ 
		int rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	return rev;
}

int main()
{
	int x,y,z,result=0;
	
	printf("Enter x and y:");
	scanf("%d %d",&x,&y);
	
	x=reverse(x);
	y=reverse(y);
	y/=10;
	
	while(x>0||y>0)
	{
		int x_last=x%10;
		result=result*10+x_last;
		x/=100;
		
		int y_last=y%10;
		if(y_last)
		result=result*10+y_last;
		y/=100;
	}
	printf("Resultant number =%d",result);
	
	return 0;
}
