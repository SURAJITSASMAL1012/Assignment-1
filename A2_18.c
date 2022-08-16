//Assignment 2:program 18//
//To convert capital letters of any string to small letter and vice-versa//

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i;
    
    printf("enter the string :");
    gets(a);
    for (i = 0; i < strlen(a); i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
        	a[i]=a[i]+32;
	   }
    }
    printf("the string is in capital letter:");
    puts(a);
   
    return 0;
}
