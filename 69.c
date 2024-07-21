#include<stdio.h>
int main (void)
{
	int v[15];
	int n;
	int r = 0;

	for(int ic = 0; ic < 15; ic++)
	{
		printf("\nEntre com o número inteiro da posição %d: ", ic + 1);
		scanf(" %d", &v[ic]);
	}

	for (int ic = 0; ic < 10; ic++) printf("--");

	printf("\nEntre com um número: ");
		scanf(" %d", &n);

	for (int ic = 0; ic < 15; ic++)
	{
		if (v[ic] == n) r++;
	}

	printf("\nO número inserido aparece %d no vetor.\n", r);
	return 1;
}
