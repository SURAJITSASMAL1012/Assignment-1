//Assignment1:program 18//
//covert  the digit of an integer in to words//

#include<stdio.h>

int main()
{
	int num,rem,rev=0;
	
	printf("Enter an integer:");
	scanf("%d",&num);
	
	while(num)
	{
		rem =num%10;
		rev=rev*10+rem;
		num/=10;
	}
	while(rev)
	{

		rem=rev%10;
		switch(rem)
		{
			case 0:printf("zero\t");
			break;
			case 1:printf("one\t");
			break;
			case 2:printf("two\t");
			break;
			case 3:printf("three\t");
			break;
			case 4:printf("four\t");
			break;
			case 5:printf("five\t");
			break;
			case 6:printf("six\t");
			break;
			case 7:printf("seven\t");
			break;
			case 8:printf("eight\t");
			break;
			case 9:printf("nine\t");
			break;
		}
		rev/=10;
    }
	return 0;
}
