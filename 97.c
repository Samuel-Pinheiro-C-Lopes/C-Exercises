#include<stdio.h>

int main (void)
{
	// declaração
	int matInt1[5][5];
	int matInt2[5][5];
	int i, j;
	int x, y;

	// inicialização - entrada da primeira matriz
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			printf("\nEntre com [%d] [%d]: ", i, j);
			scanf(" %d", &matInt1[i][j]);
		}
	
	// inicialização - entrada do x e y
	printf("\nEntre com x: ");
	scanf(" %d", &x);
	printf("\nEntre com y: ");
	scanf(" %d", &y);

	// compativel com índice das matrizes
	x -= 1;
	y -= 1;

	// verificação
	if (x < 0 || x > 4 || y < 0 || y > 4)
	{
		printf("\nx ou y inválidos (maior ou menor do que a medida da matriz)...\n");
		return 0;
	}

	// atribuição geral
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			matInt2[i][j] = matInt1[i][j];

	// atribuição da linha
	for (i = 0; i < 5; i++)
	{
		matInt2[i][y] = matInt1[i][x];
		matInt2[i][x] = matInt1[i][y];
	}

	// atribuição da coluna
	for (i = 0; i < 5; i++)
	{
		matInt2[y][i] = matInt1[x][i];
		matInt2[x][i] = matInt1[y][i];
	}

	// atribuição da diagonali principal
	for (i = 0, j = 4; i < 5; i++, j--)
		matInt2[i][j] = matInt1[i][i];
	
	// atribuição da diagonal secundária
	for (i = 0, j = 4; i < 5; i++, j--)
		matInt2[i][i] = matInt1[i][j];

	printf("\n");

	// saída - matriz 1
	printf("\nMatriz 1: \n");
	for (i = 0; i < 5; i++)
	{
		printf("\n");
		for (j = 0; j < 5; j++)
			printf(" %d ", matInt1[i][j]);
	}

	printf("\n");

	// saída - matriz 2
	printf("\nMatriz 2: \n");
	for (i = 0; i < 5; i++)
	{
		printf("\n");
		for (j = 0; j < 5; j++)
			printf(" %d ", matInt2[i][j]);
	}

	printf("\n");

	return 1;
}
