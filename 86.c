#include<stdio.h>
#define TAM_MAX 256

int main (void)
{
	// declara
	char string[TAM_MAX];
	int i;
	int res;
	int c = 0;
	
	// inicializa
	for (i = 0; i < TAM_MAX; i++)
	{
		string[i] = getchar();
		if (string[i] == 10)
		{
			string[i] = '\0';
			break;
		}
		c++;
	}

	// resultado
	for (i = 0; i < c; i++)
	{
		if (string[i] == 'I') res++;
		else if (string[i] == 'V') res += 5;
		else if (string[i] == 'X') res += 10;
		else if (string[i] == 'L') res += 50;
		else if (string[i] == 'C') res += 100;
		else if (string[i] == 'D') res += 500;
		else if (string[i] == 'M') res += 1000;
	}

	// saída
	printf("\nO valor resultado é: %d.\n", res);

	return 1;
}

// nota: verificar ordenação, chegando sempre valor atual -1 e, se a soma atual for maior, está errado.
