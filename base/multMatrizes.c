#include<stdio.h>

int main (void)
{
	int matInt1[2][2];
	int matInt2[2][2];
	int matInt3[2][2];
	int i, j, k;

	// entrada 1
	printf("\nEntre com a primeira matriz:\n");
	for (i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
		{
			printf("\nEntre com [%d] [%d]: ", i, j);
			scanf(" %d", &matInt1[i][j]);
		}

	// entrada 2
	printf("\nEntre com a segunda matriz:\n");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
		{
			printf("\nEntre com [%d] [%d]: ", i, j);
			scanf(" %d", &matInt2[i][j]);
		}

	// inicialização
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			matInt3[i][j] = 0;


	// atribuição
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 2; k++)
			{
				matInt3[i][j] += matInt1[i][k] * matInt2[k][j];
			}
		}
	}

	printf("\n");

	// saída - matriz 1
	for (i = 0; i < 2; i++)
	{
		printf("\n");
		for (j = 0; j < 2; j++)
			printf(" %d ", matInt1[i][j]);
	}

	printf("\n");

	// saída - matriz 2
	for (i = 0; i < 2; i++)
	{
		printf("\n");
		for (j = 0; j < 2; j++)
			printf(" %d ", matInt2[i][j]);
	}

	printf("\n");

	printf("\nMatriz resultante da multiplicação de ambas: \n");
	for (i = 0; i < 2; i++)
	{
		printf("\n");
		for (j = 0; j < 2; j++)
			printf(" %d ", matInt3[i][j]);
	}
	printf("\n\n");

	return 1;
}
