#include<stdio.h>

#define L (50)

int n;

// calcular a moda dos elementos
int calcularModa(int v[n])
{
	// quantidade de ocorrências para uma iteração
	int qnt1 = 0;
	// maior quantidade de ocorrência até então
	int qnt2 = 0;
	// elemento da iteração atual
	int el;
	// moda até então
	int moda;

	// para cada elemento do array...
	for (int ic1 = 0; ic1 < n; ic1++)
	{
		// define-se elemento atual e atribui
		// #qnt1 como 0
		el = v[ic1];
		qnt1 = 0;
		
		// verifica-se quantas vezes o #el
		// aparece em todo o vetor, atribuindo
		// a quantidade à #qnt1
		for (int ic2 = 0; ic2 < n; ic2++)
		{
			if (v[ic2] == el) qnt1++;
		}	
		
		// se a quantidade atual - #qnt1 - for maior que a maior quantidade até então - #qnt2 -, atribui-se o valor de #qnt1 à #qnt2
		if (qnt1 > qnt2) 
		{
			moda = el;
			qnt2 = qnt1;
		}
		
	}

	return moda;

}

// calcular a mediana dos elementos
int calcularMediana(int v[n])
{
	float mediana = v[0];

	// obter o elemento da posição do 'meio' do vetor
	if (n != 1) 
	for (int ic = 0; ic < n; ic++)
	{

		if (n%2 == 0)
		{
			if (ic == n/2) 
				mediana = (v[ic - 1] + v[ic]) / 2.00;
		}
		else
		{
			if (ic == n/2) mediana = v[ic];
		}
	}

	return mediana;
}

// calcular a média

float calcularMedia(int v[n])
{
	float media = 0.00;

	// somatório dos #n elementos do vetor
	for (int ic = 0; ic < n; ic++)
	{
		media += v[ic];
	}

	// média obtida
	media /= n;

	return media;
}

// programa principal
int main (void)
{
	// variáveis do comando da questão
	int moda;
	float  mediana;
	float media;

	// número de elementos do vetor
	printf("\nEntre com a quantidade de elementos do vetor (até 50): ");
	scanf(" %d", &n);

	int v[n];

	// validar quantidade
	if (!(n > 0 && n < 51))
	{
		printf("\nQuantidade inválida...\n");
		return 0;
	}

	// inicializar elementos do vetor
	for (int ic = 0; ic < n; ic++)
	{
		printf("\nEntre com o valor na %d posição: ", ic + 1);
		scanf(" %d", &v[ic]);
	}

	// chamada das funções responsáveis por obter as
	// variáveis pedidas pelo comando da questão
	moda = calcularModa(v);
	mediana = calcularMediana(v);
	media = calcularMedia(v);

	// saída do programa
	printf("\nA moda do vetor passado é %d.\n", moda);	
	printf("\nA mediana é: %f.\n", mediana);

	printf("\nA média de todos os elementos é: %f.\n", media);

	return 1;
}
