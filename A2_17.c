//assignment 2:program 17//
//To input a line of keyboard then encode it to its next alphabet or digit//

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i;
    printf("enter the string:");
    gets(a);
    for (i = 0; i < strlen(a); i++)
    {
       if(a[i]=='Z'||a[i]=='z')
       {
       	a[i]=a[i]-25;
	  }
	  else if(a[i]!=' ')
        {
            a[i]=a[i]+1;
        }
    }
    puts(a);
    return 0;
}
