#include<stdio.h>

int main (void)
{
	// declaração
	int matInt[5][5];
	int i, j;
	int v = 1;

	// entrada - inicializa
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("\nEntre com [%d] [%d]: ", i, j);
			scanf(" %d", &matInt[i][j]);
		}
	}
	
	// verificação 
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (matInt[i][j] != matInt[j][i])
				v = 0;
		}
	}

	if (v)
		printf("\nA matriz é simétrica.\n");
	else
		printf("\nA Matriz não é simétrica.\n");

	return 1;
}
