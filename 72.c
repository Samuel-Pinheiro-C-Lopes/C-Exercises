#include<stdio.h>

int buscaBinaria (int v[10], int c)
{
	int ini = 0;
	int fim = 9;
	int meio;

	while (ini <= fim)
	{
		meio = (ini + fim)/2;

		if (v[meio] == c) return meio;
		else if (v[meio] > c) fim = meio - 1;
		else if (v[meio] < c) ini = meio + 1;
	}

	return -1;
}
		
int main (void)
{
	int v[10];
	int busca;
	int posicao;

	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nEntre com o %d elemento: ", ic + 1);
		scanf(" %d", &v[ic]);
	}

	printf("\n-----------------------\n");

	printf("\nEntre com um parâmetro de busca: ");
	scanf(" %d", &busca);

	posicao = buscaBinaria(v, busca);

	printf("\nA posição é: %d.\n", posicao + 1);

	return 1;
}
