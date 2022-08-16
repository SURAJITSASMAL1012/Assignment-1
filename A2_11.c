//Assignment 2:Program 11(N)//
//Transpose of a Matrix//

#include<stdio.h>

int main()
{
	int m,n,a[10][10],j,i;
	
     printf("Enter the row of the matrix:");
	scanf("%d",&m);
	printf("Enter the column of the matrix:");
	scanf("%d",&n);
	
	
	printf("Enter the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
     }
     
     printf("Transpose of the matrix\n");
     for(i=0;i<n;i++)
     {
     	for(j=0;j<m;j++)
     	{
     		printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
