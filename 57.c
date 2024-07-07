#include<stdio.h>
int main (void)
{
	int N;
	float S = 1;
	float n = 0;
	printf("\nEntre com um número: ");
	scanf(" %d", &N);
	for (int c = 2; c <= N; c++)
	{
		n = c;
		for (int b = 2; b <= c; b++) n *= c;
		printf("\n%f %f\n", n, S);
		S += 1/n;
	}
	printf("\nO somatório dos N termos é: %f.\n", S);
	return 1;
}
