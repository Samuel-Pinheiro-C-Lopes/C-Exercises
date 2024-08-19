#include<stdio.h>
#define TAM_MAX 256

// função para checar se é vogal
int checarVocal(char c)
{
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'o' || c == 'O' || c == 'i' || c == 'I' || c == 'U' || c == 'u')
		return 1;
	return 0;
}

int main (void)
{
	// declaração
	char string1[TAM_MAX];
	int tam1 = 0;
	int i;

	// entrada
	for (i = 0; i < TAM_MAX; i++)
	{
		string1[i] = getchar();
		if (string1[i] == 10)
		{
			string1[i] = '\0';
			break;
		}
		tam1++;
	}

	// declaração resultado
	char string2[tam1];
	int tam2 = 0;

	// vogais no começo
	for (i = 0; i < tam1; i++)
	{
		if (checarVocal(string1[i]))
		{
			string2[tam2] = string1[i];
			tam2++;
		}
	}

	// consoantes no final
	for (i = 0; i < tam1; i++)
	{
		if (!checarVocal(string1[i]))
		{
			string2[tam2] = string1[i];
			tam2++;
		}
	}

	// saída
	printf("\nA reordenação resultante foi de: %s.\n", string2);

	return 1;
}
