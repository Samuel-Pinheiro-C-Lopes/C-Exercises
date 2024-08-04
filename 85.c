#include<stdio.h>
#define TAM_MAX 256

int verificarHex (const char c)
{
	if ((c > 47 && c < 59) || (c > 64 && c < 71)) return 1;
	else return 0;
}

int main (void)
{
	// declara
	char string1[TAM_MAX]; // string
	int i, j; // contador
	int c = 0; // contador do tamanho da string
	int res = 0; // resultado decimal
	int exp; // expoente atual
	
	// inicializa
	for (i = 0; i < TAM_MAX; i++)
	{
		string1[i] = getchar();
		// gate para entradas não numéricas (exceção do enter...)
		if (!verificarHex(string1[i]) && string1[i] != 10) return 0;
		else if (string1[i] == 10)
		{
			string1[i] = '\0';
			break;
		}
		c++;
	}

	int arr[c]; // vetor com números
		    // inicializado aqui por
		    // conta do c e da verificação

	// inicializa
	for (i = 0; i < c; i++)
	{
		arr[i] = string1[i];
		if (string1[i] > 47 && string1[i] < 59) 
		{
			// tabela ASCII, 0 em char = 48 em int...
			arr[i] -= 48;
		}
		else
			arr[i] -= 55; 
	}

	// número decimal resultante
	for (i = 0; i < c; i++)
	{
		exp = 1; // exp
		for (j = 0; j < (c - i) - 1; j++) exp *= 16; 
		res += arr[i] * exp;
	}

	printf("\nResultado: %d.\n", res);

	return 1;
}
