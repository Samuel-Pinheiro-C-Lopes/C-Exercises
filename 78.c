#include<stdio.h>
#define TAM_MAX 256

// verificar caracter 1 e caracter 2
int ver(char c1, char c2)
{
	if (c1 == c2) return 1;
	else return 0;
}


int main (void)
{
	// variáveis
	int string[TAM_MAX];
	int i;

	// inicializa a string
	for(i = 0; i < TAM_MAX; i++)
	{
		string[i] = getchar();
		if (string[i] == 10)
		{
			string[i] = 0;
			break;
		}
	}

	// verifica entrada do usuário
	char c1;
	printf("\nEntre com um caracter: ");
	scanf(" %c", &c1);

	// número de ocorrências
	int c = 0;
	for (i = 0; string[i] != 0; i++)
		if (ver(string[i], c1)) c++;

	// saída
	printf("\nAparece %d vezes.\n", c);
	
	return 1;
}
