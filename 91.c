#include<stdio.h>

int main (void)
{
	// declaração
	int matInt[5][5];
	int i, j;
	int somai[5];
	int somaj[5];

	for (i = 0; i < 5; i++)
	{
		somai[i] = 0;
		somaj[i] = 0;
	}

	// entrada e atribuição às somas
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("\n Entre com o valor para [%d] [%d]: ", i, j);
			scanf(" %d", &matInt[i][j]);
			somaj[j] += matInt[i][j];
			somai[i] += matInt[i][j];
		}
	}

	// saída da matriz
	for (i = 0; i < 5; i++)
	{
		printf("\n");
		for (j = 0; j < 5; j++)
		{
			printf(" %d ", matInt[i][j]);
		}
	}

	printf("\n\n\nSaída somai: ");

	// saída das soma i
	for (i = 0; i < 5; i++)
	{
		printf(" %d ", somai[i]);
	}

	// saída das soma j
	printf("\n\n\nSaída somaj: ");

	// saída soma j
	for (i = 0; i < 5; i++)
	{
		printf(" %d ", somaj[i]);
	}

	printf("\n");

	return 1;
}
