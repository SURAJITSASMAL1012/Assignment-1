//Assignment 2:program 16//
//Write a menu driven program consisting of the func- strlen(),strcpy(),strcat(),strrev(),strcmp()  without using library function//


#include<stdio.h>
#include<string.h>
void string_concatenate(char*,char*);
int string_compair(char*,char*);
int string_len(char*);
void string_reverse(char*);
void string_copy(char*,char*);
int main()
{
	char s1[100],s2[100];
	int k,a;
	do
	{
		printf("To append a string to another press 1 \nTo know the lenth of a string press 2 \nTo copy a string to another press 3 \nTo compair two strings press 4 \nTo see the reverse of a string press 5\n");
		scanf("%d",&k);
		switch (k)
		{
			case 1:
				printf("enter a two strings\n");
				scanf("%s%s",s1,s2);
				//gets(s1);
				//gets(s2);
				string_concatenate(s1,s2);
				printf("%s\n",s1);
				break;
			case 2:
				printf("enter a string\n");
				scanf("%s",s1);
				a = string_len(s1);
				printf("the lenth of the given string is %d\n",a);
				break;
			case 3:
				printf("enter two strings\n");
				scanf("%s%s",s1,s2);
				string_copy(s1,s2);
				printf("after coping the 2nd string to the 1st we get %s\n",s1);
				break;
			case 4:
				printf("enter two string\n");
				scanf("%s%s",s1,s2);
				a = string_compair(s1,s2);
				if(a==0)
				printf("the given tow strings are same\n");
				else
				printf("they are not same\n");
				break;
			case 5:
				printf("enter a string\n");
				scanf("%s",s1);
				string_reverse(s1);
				printf("reversed string is %s\n",s1);
				break;
		}
		printf("enter 0 to run again or 1 otherwise\n");
		scanf("%d",&k);
	}while(k==0);
	return 0;
}
void string_concatenate(char*s1,char*s2)
{
	while(*s1!='\0')
	s1++;
	while(*s2!='\0')
	{
		*s1=*s2;
		s1++;
		s2++;
	}
	*s1='\0';
}
int string_compair(char*s1,char*s2)
{
	for(;*s1!='\0'&&*s2!='\0';s1++,s2++)
	{
		if(*s1!=*s2)
		return 1;
	}
	
	if(*s1!='\0')
	return 2;
	else if(*s2!='\0')
	return 3;
	else
	return 0;
}
void string_reverse(char *s)
{
	int n,i;
	char *t;
	n=string_len(s);
	for(i=0;i<n/2;i++)
	{
		*t = s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=*t;
	}
}
int string_len(char *s)
{
	int i=0;
	while(*s!='\0')
	{
		s++;
		i++;	
	}
	return i;
}
void string_copy(char*s1,char*s2)
{
	while(*s2!='\0')
	{
		*s1=*s2;
		s1++;
		s2++;
	}
	*s1='\0';
}
