#include<stdio.h>
int main (void)
{
	int n;
	int menor;
	float s1 = 0.00;
	float s2 = 0.00;

	printf("\nEntre com o número de dias do mês: ");
	scanf(" %d", &n);
	if (!(n > 0 && n < 32)) 
	{ 
		printf("\nNúmero de dia inválido\n");
	       	return 0; 
	}

	int puv[n];

	for (int ic = 0; ic < n; ic++)
	{
		printf("\nEntre com o índice pluviométrico do dia %d do mês: ", ic + 1);
		scanf(" %d", &puv[ic]);
	}

	for (int ic = 0; ic < n; ic++)
	{
		if (ic == 0) menor = puv[ic];
		else
		{
			if (menor > puv[ic]) menor = puv[ic];
		}
	}

	for (int ic = 0; ic < n; ic++)
	{
		if (ic < n/2) s1 += puv[ic];
		else s2 += puv[ic];
	}

	s1 /= (n/2.00);
	s2 /= (n/2.00);

	printf("\nA média da primeira metade do mês foi %f e a da segunda foi %f. O menor índice foi %d.\n", s1, s2, menor);

	return 1;
}
