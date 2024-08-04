#include<stdio.h>
#define TAM_MAX 256

int main (void)
{
	// declara
	char string1[TAM_MAX];
	int i;
	int ini;
	int fim;

	// inicializa string
	for (i = 0; i < TAM_MAX; i++)
	{
		string1[i] = getchar();
		if (string1[i] == 10)
		{
			string1[i] = '\0';
			break;
		}
	}

	// inicializa início e fim da substring de saída
	printf("\nEntre com o início e fim, respectivamente: \n");
	scanf(" %d", &ini);
	scanf(" %d", &fim);

	// verificar
	if (fim > i || ini > fim)
	{
		printf("\nInício e/ou fim inválido(s).");
		return 0;
	}

	// torna o início de entrada = início do vetor
	ini -= 1;

	printf("\nA substring é: ");

	// saída do vetor
	for (i = 0; i < fim - ini; i++)
	{		
		printf("%c", string1[ini + i]);
		// string2[i] = string1[ini + i]; // caso quisesse 
						  // passar para segunda string
	}

	printf(".\n");

	return 1;
}
