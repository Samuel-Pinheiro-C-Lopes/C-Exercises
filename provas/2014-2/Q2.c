// QUESTÃO II
// Escreva um programa em C que imprima os primeiros N pares de
// números primos, onde N é uma entrada para o programa em questão
#include<stdio.h>
int main (void)
{
	/*
	ESBOÇO:
	entrada -> número (N)
	num1 = 2; (primo a ser testado)
	num2; (primo anterior)
	c = 0 (contador)
	v = 0 (verificador)
	primeiro: buscar os primos
	enquanto c < N testar primos (num1++)
	se for primo:
      	num2 + 2 == num1?
        se sim, 
		imprima (num2, num1);	
		N++
	num2 = num1 
	repita o enquanto...
*/
	int N;
	int num1 = 3;
	int num2 = 0;
	int c = 0;
	int v; 

	printf("\nEntre com o número N dos primeiros pares de primos gêmeos: ");
	scanf(" %d", &N);

	while (c < N)
	{
		v = 0;

		for (int ic = 1; ic <= num1/2; ic++)
		{
			if (num1%ic == 0) v++;
			if (v > 1) break;
		}

		if (v == 1)
		{
			if (num2 + 2 == num1)
			{
				printf("\n(%d, %d)\n", num2, num1);
			c++;
			}

			num2 = num1;
		}

		num1++;
	}

	printf("\nEncerrado.\n");
}

		



