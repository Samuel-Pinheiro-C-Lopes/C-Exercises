#include<stdio.h>
int main (void)
{
	int n1[10];
	int n2[10];
	int s[10];

	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nEntre com o valor da %d posição do 1° vetor: ", ic);
		scanf(" %d", &n1[ic]);
		printf("\nEntre com o valor da %d posição do 2° vetor: ", ic);
		scanf(" %d", &n2[ic]);
		s[ic] = n1[ic] + n2[ic];
	}


	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nSoma da posição %d:  %d\n", ic + 1, s[ic]);
	}

	return 1;
}
