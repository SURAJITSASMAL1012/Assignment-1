//Assignment 2:program 8//
//Reverse of a string and check whether the string is pallindrome or not//


#include<stdio.h>

int main()
{
	int len,i,j,flag=0;
	char s1[20],s2[20];
	
	printf("Enter the string:");
	gets(s1);
	
	len=0;
	while(s1[len]!='\0')
	{
		len++;
	}
	for(i=0,j=len-1;i<len;i++,j--)
	{
		s2[j]=s1[i];
	}
	s2[len]='\0';
	printf("Reverse string:%s",s2);
	
	for(i=0,j=0;i<len;i++,j++)
	{
	 if(s1[i]!=s2[j])
	 {
		flag=1;
		break;
	 }
	}
	 
	 if(flag==0)
	 printf("\nPallindrome");
	 else
	 printf("\nNot pallindrome");
	 
	return 0;
}
