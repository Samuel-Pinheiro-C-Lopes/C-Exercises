// QUESTÃO III
// Escreva um programa em C que leia 'i', 'j' e 'm' e imprima todos os pares 'i*' congruente módulo 'm' a 'j*', onde 'i*' <= i e 'j*' <= j
#include<stdio.h>

// módulo m
int m;

// verificar se i congruente módulo m a j
int verificarCong(int i, int j)
{
	if (i % m == j % m) return 1;
	else return 0;
}


int main (void)
{
	int i;
	int j;

	// entrada do usuário
	printf("\nEntre com o valor de um número i: ");
	scanf(" %d", &i);
	printf("\ncongruente módulo de um número m: ");
	scanf(" %d", &m);
	printf("\na um número j: ");
	scanf(" %d", &j);

	// verificar todos os números do intervalo
	for (int ic1 = 0; ic1 <= i; ic1++)
	{

		for (int ic2 = 0; ic2 <= j; ic2++)
		{
			if (verificarCong(ic1, ic2))
			{
				printf("\n(%d, %d)\n",ic1, ic2);
			}
		}
	}

	/*
	if (verificarCong(i, j)) printf("\nÉ!!!\n");
	else printf("\nNão é...\n");
	*/

	return 1;
}
