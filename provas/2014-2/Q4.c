// QUESTÃO IV
// Crie um programa em C que receba uma lista de 50 números de
// registro inteiros e origine uma lista dessa mas sem duplicatas
#include<stdio.h>
int main (void)
{
	/*
	ESBOÇO
	int v = 1;
	int arr[5];
	int n;
	int o = 1;;

	for (int ic = 0; ic < 5; ic++)
		inicializar arr...
	
	for (int ic1 = 0; ic1 < 5; ic1++)
	{
		n = v[ic1];

		for (int ic2 =ic1; ic >= 0; ic++)
			if n = v[ic2] v = 0;

		if (v) printf("\n%d - %d\n", o, n); o++
	}
}
	*/
	int q = 10;

	int v;
	int arr[q];
	int n;
	int o = 0;
	
	for (int ic = 0; ic < q; ic++)
	{
		printf("%d - ", ic + 1);
		scanf(" %d", &arr[ic]);
	}

	for (int ic1 = 0; ic1 < q; ic1++)
	{
		n = arr[ic1];
		v = 1;

		for (int ic2 = ic1 - 1; ic2 >= 0; ic2--)
		{
			if (n == arr[ic2]) v = 0;
		}

		if (v) 
		{
			arr[o] = n;
			o++;
       		}

	}

	printf("\n%d Alunos\n", o);

	for (int ic = 0; ic < o; ic++)
		printf("%d - %d\n", ic + 1, arr[ic]);

	return 1;
}
