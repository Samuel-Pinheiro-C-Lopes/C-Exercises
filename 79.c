#include<stdio.h>
#define TAM_MAX 256

int main (void)
{
	// string, contador 'i' e contador 'c'
	char string1[TAM_MAX];
	int i;
	int c = 0;

	for (i = 0; i < TAM_MAX; i++)
	{
		// adiciona o char e encerra se foi enter
		string1[i] = getchar();
		if (string1[i] == 10)
		{
			string1[i] = 0;
			break;
		}
		c++;
	}

	// declara e inicializa o início e fim
	int ini, fim;
	printf("\nEntre com o início almejada: ");
	scanf(" %d", &ini);
	printf("\nFinal: ");
	scanf(" %d", &fim);

	// validar dados
	if (ini < 0 || ini > fim || fim > c)
	{
		printf("\nInício e/ou fim inválidos.\n");
		return 0;
	}

	// início (entrada de 1-#n, array 0-(#n - 1)
	ini -= 1;
	char string2[fim - ini];

	c = 0;

	// fim não precisa se subtraído pois verifica '<' e não
	// '<='
	for (i = ini; i < fim; i++, c++)
	{
		// 'c' para posições da string 2 e 'i' para
		// string 1
		string2[c] = string1[i];
	}

	// saída
	printf("\nA substring resultante é: %s.\n", string2);

	return 1;
}
