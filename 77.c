#include<stdio.h>
#define TAM_MAX 256

int main (void)
{
	char string1[TAM_MAX];
	int i;
	int c = 0;
	char el;
	
	for (i = 0; i < TAM_MAX; i++)
	{
		el = getchar();
		if (el != 10)
		{
			string1[i] = el;
			c++;
		}
		else break;
	}

	char string2[c];

	for (i = c; i > 0; i--)
	{
		string2[c - i] = string1[i - 1];
		printf("\n%c\n", string2[c - i]);
	}

	printf("\n\n%d\n", string2[c]);

	printf("\n\nO: %d\n", string1[c + 1]);

	printf("\nPrimeira string: %s.\n", string1);
	printf("\nSegunda string: %s.\n", string2);

	return 1;
}
