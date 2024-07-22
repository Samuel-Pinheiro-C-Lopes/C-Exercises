// Questão 1 - Valor 2.0
// Escreva um programa em C que use a técnica de subtração do
// número por ímpares consecutivos a partir de 1 para obter
// a raíz quadrada inexata ou exata dele.
#include<stdio.h>
int main (void)
{
	/*
	ESBOÇO:
	entrada -> número inteiro
	requer contador
	for c = 1, num >= 0; c += 2
	numero suposto: 16
	1 -> 16 - 1 = 15 (1);
	2 -> 15 - 3 = 12 (2);
	3 -> 12 - 5 = 7 (3);
	4 -> 7 - 7 = 0 (4);
	retorne (4) e diga se é exata ou aproximada...
	*/

	int num;
	int c = 0;

	printf("\nEntre com um número: ");
	scanf(" %d", &num);

	for (int ic = 1; num > 0; ic += 2)
	{
		c++;
		num -= ic;
	}

	if (num < 0) printf("\nA raíz inexata do número é: %d.\n", c);
	else if (num == 0) printf("\nA raíz exata do número é: %d.\n", c);

	return c;
}

