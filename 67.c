#include<stdio.h>
int main (void)
{
	int v1[10];
	int v2[10];
	int m[10];

	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nEntre com o número de posição %d do 1° vetor: ", ic + 1);
		scanf(" %d", &v1[ic]);
	}

	printf("\n-------------\n");

	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nEntre com o número de posição %d do 1° vetor: ", ic + 1);
		scanf(" %d", &v2[ic]);
	}
	
	printf("\n-------------\n");

	for (int ic = 0; ic < 10; ic++)
	{
		if (v1[ic] > v2[ic]) m[ic] = v1[ic];
		else m[ic] = v2[ic];
		printf("\nMaior da %d posição de ambos: %d.\n", ic + 1, m[ic]);	
	}
	return 1;
}
