//Assignment1:program 15//
//print triplet<x,y,z> such that x^2+y^2=z^2//

#include<stdio.h>
#include<math.h>

int main()
{
	int x,y,z,n,m;
	float p;
	printf("Enter n value:");
	scanf("%d",&n);
	
	for(x=1;x<n;x++)
	{
		for(y=1;y<n;y++)
		{
			z=(x*x)+(y*y);
			p = sqrt(z) ; 
 	        m = p ; 
 	        if (p == m) 
			printf("\n%d %d %d",x,y,m);
			
		}
	}
	
	return 0;
	
}
