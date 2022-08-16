//Assignment 2:program 9//
//To take a line of text then convert all the alphabets of its to uppercase//


#include<stdio.h>
#include<string.h>
int main()
{
    
    int i;
    char a[100];
    printf("enter the string :");
    //scanf("%s",&a);
    gets(a);
    for (i = 0; i < strlen(a); i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    puts(a);
    return 0;
}
