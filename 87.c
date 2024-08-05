#include<stdio.h>
#define TAM_MAX 256

int checkNonCaseSensitive(char c1, char c2)
{
	if (c1 == c2) return 1;
	if(c1 < 91)
	{
		if (c1 + 32 == c2)
			return 1;
	}
	else if(c1 > 96)
	{
		if (c1 - 32 == c2)
			return 1;
	}
	return 0;
	
}

int main (void)
{	
	char string1[TAM_MAX];
	char string2[TAM_MAX];
	int c = 0;
	int i;

	for (i = 0; i < TAM_MAX; i++)
	{
		string1[i] = getchar();
		if (string1[i] == 10)
		{
			string1[i] = '\0';
			break;
		}
		c++;
	}

	for (i = 0; i < c; i++)
	{
		string2[i] = getchar();
		if (string2[i] == 10)
		{
			string2[i] = '\0';
			break;
		}
	}

	for (i = 0; i < c; i++)
	{
		if(!checkNonCaseSensitive(string1[i], string2[i]))
		{
			printf("\nNão são iguais.\n");
			return 0;
		}
	}

	printf("\nSão iguais.\n");

	return 1;
}
