#include<stdio.h>
#define TAM_MAX 256

int main (void)
{
	char string[TAM_MAX];
	int tam = 0;
	int i;
	int j;

	for (i = 0; i < TAM_MAX; i++)
	{
		string[i] = getchar();
		if (string[i] == 10)
		{
			string[i] = '\0';
			break;
		}
		tam++;
	}

	// retirar espaços do inícios
	while (string[0] == 32)
	{
		for (j = 0; j < tam; j++)
			string[j] = string[j + 1];
		tam--;
	}

	// retirar espaços do final
	while(string[tam - 1] == 32)
	{
		string[tam - 1] = string[tam];
		tam--;
	}

	// normalizar
	for (i = 0; i < tam; i++)
	{
		while (string[i] == 32 && string[i + 1] == 32)
		{
			for (j = i; j < tam; j++)
				string[j + 1] = string[j + 2];
			tam--;
		}
	}

	// variáveis para criação a abreviação
	char abrev[tam];
	int tam2 = 0;
	int tam_pal = 0;
	int contador = 0;

	// preencher abrev com as letras - abrev[0] = primeira letra, abrev[1] = segunda letra (se houverem)... 
	// abrev[tam2] será a primeira letra do último nome
	for (i = 0; i < tam; i++)
	{
		tam_pal++;
		if (string[i] == 32)
		{
			abrev[tam2] = string[i - (tam_pal - 1)];
			tam_pal = 0;
			tam2++;
		}
		if (i == tam - 1)
		{
			for (j = i - tam_pal + 1; j < tam; j++)
			{
				abrev[tam2 + contador] = string[j];
				contador++;
			}
			tam2++;
		}
	}

	// saída
	printf("\nA abreviação resultante é: ");

	for (i = 0; i < tam2; i++)
	{
		if (i != tam2 - 1)
			printf("%c, ", abrev[i]);
		else
			for (j = i; j < i + contador; j++)
				printf("%c", abrev[j]);
	}

	printf(".\n");

	return 1;
}
