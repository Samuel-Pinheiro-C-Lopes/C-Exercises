#include<stdio.h>
int main (void)
{
	int num[10];
	int s = 0;

	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nEntre com o valor na %d posição: ", ic + 1);
		scanf(" %d", &num[ic]);
		if (num[ic]%2 == 0) s += num[ic];
	}

	printf("\nA soma de todos os números pares inseridos é: %d.\n", s);
	return 1;
}
