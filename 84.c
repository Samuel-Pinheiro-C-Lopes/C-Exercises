#include<stdio.h>
#define TAM_MAX 256

int main (void)
{
	// declara
	char string1[TAM_MAX];
	int i;
	int c = 0;

	// inicializa
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

	// verificar se não é
	for (i = 0; i < c; i++)
	{
		// (c - 1) pois c é o tamanho, logo o índice final é sempre
		// (c - 1) | mesma razão de ser '<' e não '<=' no for
		if (string1[i] != string1[(c - 1) - i])
		{
			printf("\nNão é palindrome.\n");
			return 1;
		}
	}

	// se passou pelos laços de iteração, é palindrome
	printf("\nÉ palindrome.\n");

	return 1;
}
