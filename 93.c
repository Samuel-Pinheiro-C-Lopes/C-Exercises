#include<stdio.h>

int main (void)
{
	// declaração
	int matInt[5][5];
	int i, j;
	int somaDP = 0;
	int somaDS = 0;

	// entrada, inicialização
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("\nEntre com [%d] [%d]: ", i, j);
			scanf(" %d", &matInt[i][j]);
		}
	}

	// somatório diagonal principal
	for (i = 0; i < 5; i++)
	{
		somaDP += matInt[i][i];
	}

	// somatória diagonal secundária
	for (i = 0, j = 4; i < 5; i++, j--)
	{
		somaDS += matInt[i][j];
	}

	// saída (matriz)
	printf("\nMATRIZ: \n");
	for (i = 0; i < 5; i++)
	{
		printf("\n");
		for (j = 0; j < 5; j++)
			printf("%d ", matInt[i][j]);
	}

	// saída (resposta)
	printf("\n\nA soma da diagonal principal é: %d;\nA soma da diagona secundária é: %d.\n", somaDP, somaDS);

	return 1;
}
