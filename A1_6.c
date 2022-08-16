//Assignment1:program 6//
//prime number in a given range//

#include<stdio.h>

int main()
{
  int u,n,i,flag=0;
  
  printf("Enter the upper limit:\t");
  scanf("%d",&u);
  
  for(n=2;n<=u;n++)
  {
   flag=0;
  	for(i=2;i<n;i++)
  	{
  		if(n%i==0)
  		{
  			flag=1;
  			break;
		  }
	  }
	  if(flag==0)
	  printf("%d\t",n);
  }
  return 0;

}
