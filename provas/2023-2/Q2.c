// QUESTÃO II 
// Escreva um programa que gere a lista dos 20 primeiros expoentes de Mersenne (número natural n tal qual 2^n - 1 é um primo assim como n
#include<stdio.h>

// verifica se é primo
int verificarPrimo(int num)
{
	int v = 0;

	for (int ic = 1; ic <= num/2; ic++)
	{
		if (num%ic == 0) v++;
		if (v > 1) break;
	}

	if (v == 1) return 1;
	else return 0;
}

// gera o número de Mersenne do número entrado (num = expoente)
int gerarMn(int num)
{
	int r = 1;
	for (int ic = 0; ic < num; ic++)
		r *= 2;

	return r - 1;
}

int main (void)
{
	int n = 0;
	int c = 0.00;
	int mn;

	while (n < 20)
	{
		// se o número for primo...
		if (verificarPrimo(c))
		{
			// se o mersenne for primo...
			mn = gerarMn(c);
			if(verificarPrimo(mn))
			{
				// então é um expoente de mersenne,
				// imprima-o
				printf("\n%d", c);
				n++;
			}
		}
		c++;
	}

	return 1;
}



