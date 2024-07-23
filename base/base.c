// BASE PARA PROBLEMAS ENVOLVENDO NOÇÕES DE C
#include<stdio.h>

// verifica se o número é primo
int verificarPrimo (int num)
{
	int v = 0;

	for (int ic = 1; ic <= num/2; ic++)
	{
		if (num%ic == 0) v++;
		if (v > 1) break;
	}

	if (v == 1) return 1;
	else return 0;
}

// encontra a quantidade de casas de um número
int encontrarCasas (int num)
{
	int c = 0;

	for (int ic = 1; ic <= num; ic *= 10)
		c++;

	return c;
}

// Realizar operação com cada algarismo de um número
// (nesse caso vai ser soma apenas para exemplificar
int operarAlgarismos(int num)
{
	int casas = encontrarCasas(num);
	int soma = 0;

	for (int ic = 0; ic < casas; ic++)
	{
		soma += num%10;
		num /= 10;
	}

	return soma;
}

// transforma algum número decimal para alguma base (precisa de refactor
int transformarDecBase(int base, int num)
{
	int resto = num;
	int i = 1;
	int final = 0;
	int casas = 1;
	int v = 1;

	while (v)
	{
		for (int ic = 1; ic < i; ic++)
			casas *= 10;

		final += (resto % base) * (casas);

		if (resto > base)
			resto /= base;
		
		else
		{
			final += (resto / base) * (casas * 10);
			v = 0;
		}

		i++;
		casas = 1;
	}

	return final;
}

// elevar um número a um certo expoente
int elevarNumero(int exp, int num)
{
	int r = 1;

	for (int ic = 0; ic < exp; ic++)
		r *= num;

	return r;
}

// transformar um número em qualquer base para decimal
int transformarBaseDec(int base, int num)
{
	int resultado = 0;
	int casas = encontrarCasas(num);
	int elevado;

	for (int ic = 0; ic < casas; ic++)
	{
		elevado = elevarNumero(ic, base);	
		resultado += (num%10) * (elevado);
		num /= 10;
	}

	return resultado;
}	

int fatorarNum(int num)
{
	int r = num;

	for (int ic = num - 1; ic > 0; ic--)
		r *= ic;

	return r;
}

// testando validade de todos os exemplos...
int main (void)
{
	int n;
	int b;
	int novo;

	printf("\nEntre com um número decimal: ");
	scanf(" %d", &n);
	printf("\nEntre com a base de conversão dele: ");
	scanf(" %d", &b);

	novo = transformarDecBase(b, n);

	printf("\nnovo: %d\n", novo);

	printf("Deve ser 1: %d\n", verificarPrimo(7));
	printf("\nDeve ser 0: %d\n", verificarPrimo(12));
	printf("\nDeve ser 3: %d\n", encontrarCasas(100));
	printf("\nDeve ser 4: %d\n", encontrarCasas(2310));
	printf("\nDeve ser 6 (231): %d\n", operarAlgarismos(231));
	printf("\n1101 na base dec é %d\n", transformarBaseDec(2, 1101));
	printf("\n220 da base 3 na dec é: %d\n", transformarBaseDec(3,220));
	printf("\nDeve ser 6!: %d\n.", fatorarNum(6));

	return 1;
}
