#include<stdio.h>

int main (void)
{
	// declaração
	int matInt[6][6];
	int vetInt[36];
	int i, j;

	// inicializar - entrada
	for (i = 0; i < 6; i++)
		for (j = 0; j < 6; j++)
		{
			printf("\nEntre com [%d] [%d]: ", i, j);
			scanf(" %d", &matInt[i][j]);
		}

	// inicializar vetor da matriz linearizada
	for (i = 0; i < 6; i++)
		for (j = 0; j < 6; j++)
			vetInt[j + (6 * i)] = matInt[i][j];

	// saída - matriz
	for (i = 0; i < 6; i++)
	{
		printf("\n");
		for (j = 0; j < 6; j++)
			printf(" %d ", matInt[i][j]);
	}

	printf("\n");

	// saída vetor resultante
	for (i = 0; i < 36; i++)
		printf("%d ", vetInt[i]);

	printf("\n");

	return 1;
}
