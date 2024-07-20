#include<stdio.h>
int main (void)
{
	double S = 1.00;
	int N;
	printf("\nEntre com o número de elementos da sequência: ");
	scanf(" %d", &N);


	if(N >= 2)
	{
		float d;
		
		for (int c = 2; c <= N; c++)
		{
			d = c - 1;
			for (int c = d - 1; c >= 1; c--) d *= c;	
			printf("\nd atual: %f\n", d);
			S += 1.00 / d;
		}
	}
	printf("\nO resultado da sequêncai de %d números foi %lf.\n", N, S);
	return 1;
}
