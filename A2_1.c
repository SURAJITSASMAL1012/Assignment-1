//Assignment 2:prigram 1//
//Descending order of an array//

#include<stdio.h>

int main()
{
	int number[30];
	int i,j,a,n;
	
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(number[i]<number[j])
			{
				a=number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
	}
	
	printf("The number arranged in descending order:\n");
	for(i=0;i<n;++i)
	{
		printf("%d\t",number[i]);
	}
	return 0;
}
