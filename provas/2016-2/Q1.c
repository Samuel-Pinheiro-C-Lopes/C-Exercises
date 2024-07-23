// QUESTÃO I
// Escreva um programa que leia um número e informe se ele é um número primo de Chen.
#include<stdio.h>

// verifica se o número é primo
int verificarPrimo(int num)
{
	int v = 0;
	for (int ic = 1; ic < num; ic++)
	{
		if (num%ic == 0) v++;
		if (v > 1) break;
	}

	if (v != 1)
		return 0;
	else
		return 1;
}

	
int main (void)
{
	int N1;
	int vs = 0;

	printf("\nEntre com um número inteiro positivo qualquer: ");
	scanf(" %d", &N1);

	// VERIFICAR SE A ENTRADA É UM PRIMO

	vs += verificarPrimo(N1);

	if (vs == 0)
	{
		printf("\nO número inserido não é primo...\n");
		return 0;
	}

	// VERIFICAR SE N1 + 2 É UM PRIMO

	int N2 = N1 + 2;
	vs += verificarPrimo(N2);

	if (vs == 2)
	{
		printf("\nO número %d é um primo de Chen pois %d é um primo.\n", N1, N2);
		return 1;
	}

	// VERIFICAR SE N1 + 2 É UM SUBPRIMO

	for (int ic1 = 2; ic1 <= N2/2; ic1++)
	{

		if (verificarPrimo(ic1))
		{
			for (int ic2 = 2; ic2 <= N2/2; ic2++)
			{

				if(verificarPrimo(ic2))
				{
					if (ic1 * ic2 == N2)
					{
						printf("\nO número %d é um primo de Chen pois %d é um subprimo (%d * %d = %d).\n", N1, N2, ic1, ic2, N2);
						return 1;
					}
				}
			}
		}
	}

	printf("\nO número primo %d não é um primo de Chen.\n",N1);
	return 0;

}


