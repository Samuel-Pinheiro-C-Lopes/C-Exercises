#include<stdio.h>
#define TAM_MAX 256

// usa a tabela ASCII para verificar se a letra está em caixa baixa ([97, 123]) e subtrai com a diferença (32) caso
// seja o caso
int caixaAlta(char c)
{
	if (c >= 97 && c < 123)
		return c - 32;
	else if (c > 64 && c < 91)
		return c;
	else
		return c;
}

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

	// utiliza a função de caixa alta para cada letra no vetor de char
	for (i = 0; i < c; i++)
	{
		string1[i] = caixaAlta(string1[i]);
	}

	// saída
	printf("\nA string resultante é:");

	for (i = 0; i < c; i++)
		printf("%c", string1[i]);

	printf(".\n");

	return	1;
}
