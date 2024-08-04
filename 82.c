#include<stdio.h>
#define TAM_MAX 256

int main (void)
{
	char string1[TAM_MAX];
	int c = 0;
	int i;
	int j;

	// inicializar string1
	for (i = 0; i < TAM_MAX; i++)
	{
		string1[i] = getchar();
		if (string1[i] == 10)
		{
      			string1[i] = '\0';
      			break;
      		}
		c++;
	}

	// normalizar
	for (i = 0; i < c; i++)
	{
		while (string1[i] == 32 && string1[i + 1] == 32)
		{
			for(j = i; j < c; j++)
				string1[j] = string1[j + 1];
		}
	}
	
	// eliminar espaços do começo
	for (i = 0; string1[i] == 32; )
		for (j = i; j < c; j++)
			string1[j] = string1[j + 1];

	printf("\nString1: %s.\n", string1);

	int pm = 0; // palavra maior
	int pi; // palavra índice
	int pa = 0; // palavra atual
	for (i = 0; i < c; i++)
	{
		if (pa > pm && string1[i] == 32)
		{
			pm = pa;
			pi = i - pa;
		}
		
		if (string1[i] != 32)
			pa++;
		else
			pa = 0;


	}

	printf("\nA maior palavra é: ");
	for (i = pi; i < pi + pm; i++)
		printf("%c", string1[i]);
	printf(".\n");

	return 1;
}
