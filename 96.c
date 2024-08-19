#include<stdio.h>

int main(void)
{
	// declaração
	int matInt1[3][4];
	int matInt2[3][4];
	int matInt3[3][4];
	int matInt4[3][4];
	int i, j;

	// inicialização - entrada matriz 1
	printf("\nPrimeira matriz: \n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
		{
			printf("\nEntre com [%d] [%d]: ", i, j);
			scanf(" %d", &matInt1[i][j]);
		}

	// inicialização - entrada matriz 2
	printf("\nSegunda matriz: \n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
		{
			printf("\nEntre com [%d] [%d]: ", i, j);
			scanf(" %d", &matInt2[i][j]);
		}

	// inicialização matriz de soma
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			matInt3[i][j] = matInt1[i][j] + matInt2[i][j];

	
	// inicialização matriz de subtração
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			matInt4[i][j] = matInt1[i][j] - matInt2[i][j];

	printf("\n");

	// saída - matriz 1
	printf("\nMatriz 1: \n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 4; j++)
			printf(" %d", matInt1[i][j]);
	}

	printf("\n");

	// saída - matriz 2
	printf("\nMatriz 2: \n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 4; j++)
			printf(" %d", matInt2[i][j]);
	}

	printf("\n");

	// saída - soma
	printf("\nMatriz soma: \n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 4; j++)
			printf(" %d ", matInt3[i][j]);
	}
	
	printf("\n");
		
	// saída - subtração
	printf("\nMatriz subtração: \n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 4; j++)
			printf(" %d", matInt4[i][j]);
	}

	printf("\n");

	return 1;
}
