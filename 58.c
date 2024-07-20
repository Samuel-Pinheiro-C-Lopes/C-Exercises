#include<stdio.h>
int main (void)
{
	double S = 1.00;
	int N;
	printf("\nEntre com o número de elementos da sequência a fim de encontrar o valor de pi: ");
	scanf(" %d", &N);	
	if (N < 1) { printf("\nNúmero de elementos deve ser inteiro maior ou igual a 1.\n"); return 0; }

	if (N >= 2) 
	{
		int d = 3;

		for (int c = 2; c <= N; c++)
		{
			if (c%2 == 0) S -= 1.00/d;
			else S += 1.00/d;
			d += 2;
		}
	}

	S *= 4;
	printf("\nA sequência de %d números resultou em: %lf.\n", N, S);
	return 1;
}
