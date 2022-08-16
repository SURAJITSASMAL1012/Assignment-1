//Assignment 3:program 1(a)//
//Maximum and minimum number from array//

#include<stdio.h>

int main()
{
    int num[100],i,max=0,n;
	printf("How many elements?\t");
	scanf("%d",&n);
	printf("Enter %d elemets\n",n);
	int min=num[0];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]>max)
		max=num[i];
		if(num[i]<min)
		min=num[i];
	}
	printf("maximum=%d\nminimum=%d",max,min);
	
	return 0;
}
