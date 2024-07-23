// QUESTÃO 1
// 1 - Dois vetores de 10 elementos, não podem haver números repetidos e
// informa os números do primeiro que não estão no segundo
// 2 - cria um vetor 3 com a soma dos elementos do 1 com os do 2
// 3 - informar os primos de cada vetor
#include<stdio.h>

int verificarPrimo(int num)
{
	int v = 0;

	for (int ic = 1; ic <= num/2; ic++)
	{
		if (num%ic == 0) v++;
		if (v > 1) break;
	}

	if (v == 1) return 1;
	else return 0;
}

int compararVetores(int v1[10], int v2[10])
{
	int v;
	int el;

	printf("\nResposta:\n");

	for (int ic1 = 0; ic1 < 10; ic1++)
	{
		el = v1[ic1];
		v = 1;

		for (int ic2 = 0; ic2 < 10; ic2++)
		{
			if (el == v2[ic2]) v--;
			if (v < 1) break;
		}

		if (v == 1 && ic1 < 9) printf(" %d,", el);
		else if (v == 1) printf(" %d.\n", el);
	}

	return 1;
}

int v3[10];

int somarVetores(int v1[10], int v2[10])
{
	for (int ic = 0; ic < 10; ic++)
	{
		v3[ic] = v1[ic] + v2[ic];
	}
	
	printf("\nVetor 3 (soma): ");

	for (int ic = 0; ic < 10; ic++)
	{
		if (ic < 9) printf(" %d,", v3[ic]);
		else printf(" %d.\n", v3[ic]);
	}

	return 1;	
}

int primosVetores(int v1[10], int v2[10], int v3[10])
{
	printf("\nVetor 1: ");
	for (int ic = 0; ic < 10; ic++)
	{
		if (verificarPrimo(v1[ic]))
		{
			if (ic < 9) printf(" %d,", v1[ic]);
			else printf(" %d.", v1[ic]);
		}

	}

	printf("\nVetor 2: ");
	for (int ic = 0; ic < 10; ic++)
	{	
		if (verificarPrimo(v2[ic])) 
		{
			if (ic < 9) printf(" %d,", v2[ic]);
			else printf(" %d.", v2[ic]);
		}
	}

	printf("\nVetor 3: ");
	for (int ic = 0; ic < 10; ic++)
	{
		if (verificarPrimo(v3[ic]))
		{
			if (ic < 9) printf(" %d,", v3[ic]);
			else printf(" %d.", v3[ic]);
		}
	}

	printf("\n");

	return 1;
}



int main (void)
{
	int v1[10];
	int v2[10];

	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nEntre com o %d elemento do primeiro vetor: ", ic + 1);
		scanf(" %d", &v1[ic]);
	}

	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nEntre com o %d elemento do segundo vetor: ", ic + 1);
		scanf(" %d", &v2[ic]);
	}

	compararVetores(v1, v2);

	somarVetores(v1, v2);

	primosVetores(v1, v2, v3);

	return 1;
}
	
