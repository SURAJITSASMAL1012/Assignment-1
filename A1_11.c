//Assignment1:program11//
//compound interest//

#include<stdio.h>
float interest(float p,float r)
{
	return(p*r)/100;
}
int main()
{
	int ch;
	printf("select:\t");
	printf("1.compound interest\t");
	printf("2.interest:\t");
	scanf("%d",&ch);
	
	float p,r,amt=0;
	int n,i;
	switch(ch)
	{
	case 1:
		printf("Enter the principal,rate and time in years:");
		scanf("%f %f %d",&p,&r,&n);
		
		for(i=1;i<=n;i++)
		{
			amt=p+interest(p,r);
			printf("total amount at the end of %d years=%f\n",i,amt);
			p=amt;
		}
		break;
	case 2:	
		printf("Enter principal,time and total amount:");
		scanf("%f %d %f",&p,&n,&amt);
		
		float si=amt-p;
		r=(si*100)/(p*n);
		printf("interest rate:%f",r);
		break;
	default:
		printf("wrong choice!");
	}
	return 0;
}
