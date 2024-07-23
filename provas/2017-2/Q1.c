// QUESTÃO I
// Escrever um programa em C que dada a entrada de uma matriz realize
// a soma da coluna ou linha com maior quantidade de 'minhocas'
#include<stdio.h>

int c;
int l;

int verificarMaior(int v[c][l])
{
	int s = 0;
	int sc;
	int sl;

	for (int ic1 = 0; ic1 < c; ic1++)
	{
		sl = 0;
		for (int ic2 = 0; ic2 < l; ic2++)
			sl += v[ic1][ic2];
		if (sl > s) s = sl;
	}
	
	for (int ic1 = 0; ic1 < c; ic1++)
	{
		sc = 0;
		for (int ic2 = 0; ic2 < l; ic2++)
			sc += v[ic2][ic1];
		if (sc > s) s = sc;
	}

	return s;
}


		


int main (void)
{
	
	printf("\nEntre com a quantidade de linhas: ");
	scanf(" %d", &l);
	printf("\nEntre com a quantidade de colunas: ");
	scanf(" %d", &c);

	int arr[l][c];

	for (int ic1 = 0; ic1 < l; ic1++)
	{
		for (int ic2 = 0; ic2 < c; ic2++)
		{
			printf("\nEntre com o elemento da %d coluna na %d linha: ", ic2 + 1, ic1 + 1);
			scanf(" %d", &arr[ic1][ic2]);
		}
	}

	for (int ic1 = 0; ic1 < l; ic1++)
	{
		printf("\n%d Coluna: ", ic1 + 1);

		for (int ic2 = 0; ic2 < c; ic2++)
		{
			printf("| %d |  ", arr[ic2][ic1]);
		}
	}

	printf("\n");

	int maior = verificarMaior(arr);

	printf("\nMaior soma entre as linhas e colunas: %d\n", maior);

	return 1;
}
