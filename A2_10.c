//Assignment 2:program 10//
//Norm of the matrix//


#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j;
    printf("enter the no. of row of the matrix:");
    scanf("%d",&m);
    printf("no. of column of the matrix:");
    scanf("%d",&n);
    int a[100][100];
    printf("enter the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    int s=0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            s=s+a[i][j]*a[i][j];
        }
    }
    float f=sqrt(s);
    printf("the norm of the matrix is:%.3f",f);
    return 0;
}
