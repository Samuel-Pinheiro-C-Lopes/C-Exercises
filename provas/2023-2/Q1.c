//QUESTÃO I
// Escrever um programa que determine a soma das vendas do seu chefe
// [-1] encerra, 0 cancela o último
#include<stdio.h>
#define TAM_MAX 512

int main (void)
{
	int n;
	int v[TAM_MAX];
	int s = 0;
	int sentinela = 0;
	
	for (int ic = 0; ic < TAM_MAX; ic++)
	{
		v[ic] = -1;
	}

	do{
		printf("\nNúmero atual: ");
		scanf(" %d", &n);

		if (n > 0)
		{
			v[sentinela] = n;
			sentinela++;
		}
		else if (n == 0)
		{
			v[sentinela] = -1;
			sentinela--;
		}

	}while(n >= 0);

	for (int ic = 0; ic < sentinela; ic++)
		s += v[ic];

	printf("\nA soma foi: %d.\n", s);

	return 1;
}
		 

