//Assignment 3:Program3(b)//
//Matrix Transpose using Function//

#include <stdio.h>
void matrix_transpose(int m, int n){
    int a[100][100];
    printf("Enter the matrix:\n");
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = i; j < n; j++)
        {
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    printf("The transpose of the matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
	int m, n;
    printf("Enter the no. of row of the matrix:");
    scanf("%d", &m);
    printf("Enter the no. of column of the matrix:");
    scanf("%d", &n);
    matrix_transpose(m,n);
    return 0;
}
