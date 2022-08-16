// assignment 3:program 2//
// Find vowel and consonent using Function//

#include <stdio.h>
#include <string.h>
void vowel_cons_count(char *str)
{
	int i, vowel = 0, consonent = 0;
	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
				vowel++;
			else
				consonent++;
		}
	}
	printf("No. of Vowels = %d\n", vowel);
	printf("No. of Consonents = %d", consonent);
}
int main()
{
	char str[500];
	printf("Enter the string: ");
	gets(str);
	vowel_cons_count(str);
	return 0;
}
