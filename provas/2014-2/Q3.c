// QUESTÃO III
// Escreva um programa em C que calcule a soma dos recíprocos dos números triangulares para N termos, onde N é uma entrada para o programa
// S = 1/1 + 1/3 + 1/6 + 1/10 ...
#include<stdio.h>
int main (void)
{
	/*
	ESBOÇO:
	int N;
	double S = 1.00;
	int n = 3;
	int s = 3;

	1 / s (1/3)

	s += n (6)

	n++ (4)
	

	s += n (3)
	n++ (2)
	

	entrada -> N

	for (ic = 2; ic < N; ic++
	{
		S += 1 / s;

		s += n;

		n++;
	}

	printf("\n%lf é a soma.\n", S);
	*/


	int N;
	int n = 3;
	int s = 3;
	double S = 1.00;

	printf("\nEntre com o número dos recíprocos triangulares da sequência que serão somados: ");
	scanf(" %d", &N);

	for (int ic = 2; ic <= N; ic++)
	{
		S += 1.00 / s;

		s += n;

		n++;

	}

	printf("\n\n%lf é a soma.\n", S);
}
