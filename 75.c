#include<stdio.h>
int main (void)
{
	int n;

	printf("\nEntre com o número de elementos do vetor: ");
	scanf(" %d", &n);

	int v[n];
	// int temp;

	// inicializar valores do vetor
	for (int ic = 0; ic < n; ic++)
	{
		printf("\nEntre o %d elemento: ", ic + 1);
		scanf(" %d", &v[ic]);
	}

	// para cada elemento do vetor...
	for (int ic1 = 0; ic1 < n; ic1++)
	{
		// verifica-se todos os elementos do vetor
		for (int ic2 = 0; ic2 < n; ic2++)
		{
			// '<' para crescente e '>' para decrescente
			if (v[ic1] < v[ic2])
			{
				// com variável para valor temporário
				// funciona...
				/*
				temp = v[ic2];
				v[ic2] = v[ic1];
				v[ic1] = temp;
				*/

				// o método de soma / subtração
				// também funciona
				v[ic1] += v[ic2];
				v[ic2] = v[ic1] - v[ic2];
				v[ic1] -= v[ic2];
			}
		}
	}

	// exprimir o vetor reordenado...

	printf("\n\n---------------------\n\n");

	for (int ic = 0; ic < n; ic++)
		printf("\n Posição %d é: %d.\n", ic + 1, v[ic]);

	printf("\n\n---------------------\n\n");

	return 1;
}

/*
TESTES MATEMÁTICOS

a       b
a+=b;
b = a-b
a-= b;
			2  	   4
			6 (2+4)    4
			6          2 (6 - 4)
			4 (6 - 2)  2
*/
