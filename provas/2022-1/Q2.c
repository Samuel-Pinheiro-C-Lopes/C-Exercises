// QUESTÃO II
// Escreva um programa em C que leia os números A e B, onde 1 <= A <= B <= 1000, e imprima a sequência de vezes que cada digito decimal aparece no intervalo oferecido
#include<stdio.h>

// encontrar o número de casas de um número decimal
int casasDec(int num)
{
	int c = 0;
	for (int ic = 1; ic <= num; ic *= 10)
	{
		c++;
	}
	return c;
}

int main (void)
{
	int n1;
	int n2;
	int v[10];
	int casas;
	int el;
	int num;

	// inicializar vetor com 0 em cada posição
	// (cada posição denota um digito da base decimal
	for (int ic = 0; ic < 10; ic++)
		v[10] = 0;

	// entrada do usuário
	printf("\nEntre com o primeiro número: ");
	scanf(" %d", &n1);
	printf("\nEntre com o segundo número: ");
	scanf(" %d", &n2);

	for (int ic1 = n1; ic1 <= n2; ic1++)
	{
		// casas decimais do termo atual
		casas = casasDec(ic1);
		// termo armazenado
		num = ic1;

		// para cada casa do termo armazenado
		for (int ic2 = 0; ic2 < casas; ic2++)
		{
			// elemento será o digito mais à esquerda
			el = num%10;
			// o digito mais à esquerda do número é 'eliminado'
			num /= 10;
			// acrescente o valor do índice do vetor que equivale ao digito encontrado
			v[el]++;
		}
	}
			
	// saída do programa
	printf("\n");

	for (int ic = 0; ic < 10; ic++)
		printf("%d ", v[ic]);

	return 1;
}
