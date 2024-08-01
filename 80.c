#include<stdio.h>
#define TAM_MAX 256

int main (void)
{
	// duas strings e contadores
	char string1[TAM_MAX];
	char string2[TAM_MAX];
	int c = 0;
	int i;
	int j;

	// inicializa a primeira string
	for (i = 0; i < TAM_MAX; i++)
	{
		string1[i] = getchar();
		if (string1[i] == 10)
		{
			string1[i] = '\0';
			break;
		}
	}

	// inicializa a segunda
	for (i = 0; i < TAM_MAX; i++)
	{
		string2[i] = getchar();
		if (string2[i] == 10)
		{
			string2[i] = '\0';
			break;
		}
		c++;
	}

	// verificador, iteração na primeira string
	int v = 0;
	for (i = 0; string1[i] != 0; i++)
	{
		// verificador começa 'true', itera segunda string
		v = 1;
		for (j = 0; j < c; j++)
		{
			// verifica se os próximos caracteres
			// são iguais, senão, diminui o verificador
			if (string2[j] != string1[i + j]) v--;
			if (v < 1) break; // se o verificador foi 
					  // diminuido, já não
					  // é substring...
		}
		// se alguma vez 'v' permaneceu 'true', encerre a 
		// iteração (é substring)
		if (v) break;
	}

	// saída
	if (v) printf("\nÉ uma substring.\n");
	else printf("\nNão é uma substring.\n");

	return 1;
}
