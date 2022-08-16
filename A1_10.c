//Assignment1:program 10//

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float sum=0;
	float x,y,z;
	int i,num,ch,sign=-1,fact=1;
	printf("\nEnter the value range of the series value calculation:");
	scanf("%d",&num);
	printf("\n1. 1/1!+2/2!+3/3!+...");
	printf("\n2. sin(x)");
	printf("\n3. log(x)");
	scanf("%d",&ch);
	
	switch(ch)
	{
	case 1:	
		for(i=1;i<=num;i++)
		{
         fact=fact*i;
		 sum=sum+(i/fact);
	    }
		 printf("\n sum of the series 1/1!+2/2!+3/3!+... upto %d terms=%f",num,sum);
		 break;
	case 2:
		
		 printf("\nAngle in degree:");
		 scanf("%f",&x);
		 y=x*3.14/180;
		 sum=y;
		 printf("Angle in radian=%f",y);
		 for(i=3;i<=num;i+=2)
		 {
		 	fact=fact*i*(i-1);
		 	sum=sum+sign*(pow(y,i)/fact);
		 	sign=-1*sign;
		 }
		 printf("\n Value of the sin(%.0f)upto %d terms:%1f",x,num,sum);
		 break;
	case 3:
		 
		 printf("\n Enter the value of x for log(x):");
		 scanf("%f",&x);
		 z=(x-1)/(x+1);
		 for(i=1;i<=num;i+=2)
		 {
		 	sum=sum+2*(pow(z,i))/i;
		 }
		 sum=sum/2.0303;
		 
			 printf("\n Value of log(%f upto %d terms:%1f",x,num,sum);
		 break;
		 default:
		 	printf("wrong choice!");
		
	}
	
	return 0;
}
