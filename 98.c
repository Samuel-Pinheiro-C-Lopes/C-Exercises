#include<stdio.h>

int main (void)
{
	// declaração
	int matInt1[3][2];
	int matInt2[4][3];
	int matInt3[4][2];
	int i, j, k;

	// inicialização - entrada primeira matriz
	printf("\nMatriz 1: \n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
		{
			printf("\nEntre com [%d] [%d]: ", i, j);
			scanf(" %d", &matInt1[i][j]);
		}
	
	// inicialização - entrada segunda matriz
	printf("\nMatriz 2: \n");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
		{
			printf("\nEntre com [%d] [%d]: ", i, j);
			scanf(" %d", &matInt2[i][j]);
		}
	
	// inicializa matriz 3
	for (i = 0; i < 4; i++)
		for (j = 0; j < 2; j++)
			matInt3[i][j] = 0;

	// atribuição da matriz 3 - cálculo de multiplicação de matrizes
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 3; k++)
			{
				// 1 - 'i' e 'j' definem a posição do elemento a se calcular;
				// 2 - k itera hora coluna hora linha em comum das matrizes presentes
				// na operação;
				// 3 - o que se mantém são as ordenações remanescentes condizentes a fim
				// de envolver todos os componentes das matrizes envolvidas na operação 
				// (4 para as linhas de matInt2 e 2 para as colunas de matInt1).
				matInt3[i][j] += matInt1[k][j] * matInt2[i][k];
			}
		}
	}
	
	// saída - matriz 1
	printf("\nMatriz 1: \n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 2; j++)
			printf(" %d ", matInt1[i][j]);
	}
	
	printf("\n");

	// saída - matriz 2
	printf("\nMatriz 2: \n");
	for (i = 0; i < 4; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
			printf(" %d ", matInt2[i][j]);
	}

	printf("\n");

	// saída - matriz 3
	printf("\nMatriz 3: \n");
	for (i = 0; i < 4; i++)
	{
		printf("\n");
		for (j = 0; j < 2; j++)
			printf(" %d ", matInt3[i][j]);
	}

	printf("\n\n");

	return 1;	

}
