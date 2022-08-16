//Assignment2:program 7//
//To insert an elemet in the array//

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[100];
    printf("enter the numbers:");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    printf("enter the number which user want to inserting in the array:");
    scanf("%d",&k);
    a[n]=k;
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n+1; j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        
    }
    for (i = 0; i < n+1; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}
