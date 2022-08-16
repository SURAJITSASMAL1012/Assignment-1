//Assignment1:program16//
//calculator//

#include<stdio.h>
#include<math.h>

int main()
{
	int ch,a,b;
	printf("Enter 2 numbers:\t");
	scanf("%d %d",&a,&b);
	
	printf("select:\t");
	printf("1.Addition\t");
	printf("2.Substraction\t");
	printf("3.Multiplication\t");
	printf("4.Division\t");
	scanf("%d",&ch);
	
	switch(ch)
	{
	case 1:	printf("1.%d",a+b);
		break;
	case 2:	printf("2.%d",a-b);
		break;
	case 3:	printf("3.%d",a*b);
		break;
	case 4:	printf("4.%f",(float)a/b);
		break;
	default:	printf("wrong choice!\t");
	}
	return 0;
}
