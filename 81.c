#include<stdio.h>
#define TAM_MAX 256

int main (void)
{
	// declaração das variáveis
	char string1[TAM_MAX];
	int i;

	// inicialização - entrada do usuário
	for (i = 0; i < TAM_MAX; i++)
	{
		string1[i] = getchar();
		if (string1[i] == 10)
		{
			string1[i] = '\0';
			break;
		}
	}

	// variáveis para originar nova string
	char string2[TAM_MAX];
	int c = 0;

	// verifica ocorrências de múltiplos espaços e 'salta' para sempre
	// adicionar apenas um deles ao vetor de caracteres normalizado
	for (i = 0; i < TAM_MAX; i++)
	{
		if (string1[i] == 32 && string1[i + 1] == 32) continue;
		else string2[c] = string1[i];
		c++;
	}

	// saída
	printf("\nA string normalizada é: %s.\n", string2);
	return 1;
}
