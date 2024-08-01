// Escreva um programa em C que leia uma string e conte quantas ocorrências de vogais existem nessa string
#include<stdio.h>
#define TAM_MAX 256

// Verifica se o caracter é uma vogal
int verificarChar (char letra)
{
	if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') return 1;
	else return 0;
}

// Programa principal
int main (void)
{
	// Vetor de caracteres criado
	char string[TAM_MAX];

	// Inicializa o vetor
	for (int i = 0; i < TAM_MAX; i++)
		string[i] = -1;

	int i = 0;
	int c = 0;

	// Iterações
	while (i < TAM_MAX)
	{
		// se a última tecla foi 'enter'
		if (string[i - 1] == 10)
		{
			// encerra as iterações e a string
			string[i] = '\0';
			break;
		}
		else
		{
			// recebe com getchar() - captura o enter e
			// cada tecla recebida é capturada (sem pressionado)
			string[i] = getchar();
			if (verificarChar(string[i])) c++;
			i++;
		}
	}

	printf("\nApareceram %d vogais na string passada.\n", c);

	return 1;
}
