#include<stdio.h>
#define TAM_MAX 256

int main (void)
{
	// declaração
	int matInt1[256][2];
	int matFreq[3][13];
	int i, j;

	// inicialização - frequência de idade
	for (i = 0; i < 3; i++)
		for (j = 0; j < 13; j++)
			matFreq[i][j] = 0;

	// inicialização -  entrada do usuário
	for (i = 0; i < TAM_MAX; i++)
	{
		for (j = 0; j < 2; j++)
		{
			// entrada de idade - homem depois mulher
			if (j)
				printf("\nEntre com a idade da mulher no [%d] casamento: ", i);
			else
				printf("\nEntre com a idade do homem no [%d] casamento: ", i);
			scanf(" %d", matInt1[i][j]);
		}
		// validação da idade e fim da iteração circunstancialmente
		if (matInt1[i][0] < 18 || matInt1[i][0] > 30 || matInt1[i][1] < 18 || matInt1[i][1] > 30)
		{
			printf("\nEntrada de idades terminada por inserção de valor(es) inválido(s)");
			matInt1[i][0] = -1;
			matInt1[i][1] = -1;
			break;
		}
		// frequência
		else
		{
			matFreq[0][matInt[i][0]] += 1;
			matFreq[1][matInt[i][1]] += 1;
			matFreq[2][] += 1;
		}
	}

	return 1;
}
