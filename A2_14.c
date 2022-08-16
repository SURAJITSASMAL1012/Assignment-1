//Assignent 2:program 14//
// Transpose of a matrix and then print multiplied value of the matrix with its transpose//

#include <stdio.h>
int main()
{
    int m, n,i,j,k;
    printf("enter the no. of row of the matrix:");
    scanf("%d", &m);
    printf("no. of column of the matrix:");
    scanf("%d", &n);
    int a[100][100];
    printf("enter the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int b[100][100];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j]=a[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = i; j < n; j++)
        {
            int t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
    int c[100][100];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            int s=0;
            for (k = 0; k < n; k++)
            {
                s=s+b[i][k]*a[k][j];
            }
            c[i][j]=s;
        }
        
    }
    printf("the new matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
