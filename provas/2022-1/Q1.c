// QUESTÃO I
// Converter um número A da notação ACM para a notação decimal
#include<stdio.h>

// encontrar o número de casas de um número
int casasNum(int num)
{
	int c = 0;
	for (int ic = 1; ic <= num; ic *= 10)
	{
		c++;
	}

	return c;
}

// encontrar fatorial de um número
int fatorial(int num)
{
	for (int ic = num - 1; ic > 0; ic--)
		num *= ic;
	return num;
}


int main (void)
{
	int num;
	int ACM;
	int el;

	// entrada do usuário
	printf("\nEntre com o número na notação ACM: ");
	scanf(" %d", &num);

	// número de casas do número entrado
	int casas = casasNum(num);

	for (int ic = 1; ic <= casas; ic++)
	{
		// processo para obter a casa mais à esquerda
		// e, em seguida, a eliminar do número
		el = num % 10;
		num /= 10;
		// obtendo valor de ACM a cada iteração
		// até chegar na última casa
		ACM += el * fatorial(ic); 	
	}

	// saída do programa
	printf("\nACM = %d.\n", ACM);

	return 1;
}


/*
ESBOÇO
100

88

88%10
88/10

689%10
9
68
8

n = n % 10
n / 10
*/
