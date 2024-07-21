#include<stdio.h>
int main (void)
{
	int num[20];
	int menor, maior;

	for (int ic = 0; ic < 20; ic++)
	{
		printf("\nEntre com o valor da posição %d: ", ic + 1);
		scanf(" %d", &num[ic]);
		if (ic == 0)
		{
			menor = num[ic];
			maior = num[ic];
		}
		else
		{
			if (num[ic] > maior) maior = num[ic];
			if (num[ic] < menor) menor = num[ic];
		}
	}
	printf("\nO número maior e menor foram, respectivamente: %d e %d.\n", maior, menor);
	return 1;
}	
