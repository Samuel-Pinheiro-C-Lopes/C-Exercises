#include<stdio.h>

int main (void)
{
	// declaração
	int matInt[5][5];
	int i, j;
	int num;

	// inicializar - entrada
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			printf("\nEntre com [%d] [%d]: ", i, j);
			scanf(" %d", &matInt[i][j]);
		}

	// inicializar - valor a se multiplicar
	printf("\n\nEntre com o valor a se multiplicar todos os elementos da matriz: ");
	scanf(" %d", &num);


	// multiplicar todos os elementos da matriz
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			matInt[i][j] = num * matInt[i][j];

	// saída - matriz resultante
	for (i = 0; i < 5; i++)
	{
		printf("\n");
		for (j = 0; j < 5; j++)
			printf(" %d ", matInt[i][j]);
	}

	printf("\n");

	return 1;
}
