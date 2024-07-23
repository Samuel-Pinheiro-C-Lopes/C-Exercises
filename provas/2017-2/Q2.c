// QUESTÃO II
// Escreva um programa que leia os valores de um vetor de 10 posições e os suavisse dado o método proposto
#include<stdio.h>

float v1[10];
float v2[10];

int main (void)
{
	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nEntre com o %d número do vetor: ", ic + 1);
		scanf(" %f", &v1[ic]);
	}

	for (int ic = 0; ic < 10; ic++)
	{
		if (ic == 0) v2[ic] = (v1[ic] + v1[ic + 1] + v1[9]) / 3.00;
		else if (ic < 9) v2[ic] = (v1[ic] + v1[ic + 1] + v1[ic - 1]) / 3.00;
		else v2[ic] = (v1[0] + v1[ic] + v1[ic - 1]) / 3.00;
	}

	printf("\nEntrada: \n");

	for (int ic = 0; ic < 10; ic++)
		printf("\nPosição %d: %f.\n", ic + 1, v1[ic]);

	printf("\nSuavizado: \n");

	for (int ic = 0; ic < 10; ic++)
		printf("\nPosição %d: %f.\n", ic + 1, v2[ic]);

	return 1;
}
