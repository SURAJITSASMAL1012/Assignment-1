//Assignment 2:program 5//
//searching//

#include<stdio.h>
#define MAX 100

int main()
{
	int arr[MAX],n,i,item,count=0,a[MAX];
	
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	printf("Enter the %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the elemets you want to search:");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(arr[i]==item)
		{
			a[count]=i+1;
			count++;
		}
	}
	if(count!=0)
	{
		printf("\n Item is found at:");
		for(i=0;i<count;i++)
		{
			printf("%d\t",a[i]);
		}
	}
	
	else
	printf("\n Item is not found!");
  
	return 0;
}

