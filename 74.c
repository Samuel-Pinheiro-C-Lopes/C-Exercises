#include<stdio.h>
#include<stdlib.h>
#define N (30)

int v[N];
int nv[N];

// inserir um elemento no final do vetor 

int inserirFinal (int num)
{
	for (int ic = 0; ic < N; ic++)
	{
		if (v[ic] == -1) { v[ic] = num; break; }
	}

	printf("\n---------------------\n");

	for (int ic = 0; ic < N && v[ic] != -1; ic++)
		printf("Elemento %d: %d; | ", ic + 1, v[ic]);
	
	printf("\n---------------------\n");

	printf("\n\nDigite qualquer tecla para continuar: ");

	return 1;
}

// inserir um elemento em uma dada posição

int inserirPos (int pos)
{
	int length;

	for (int ic = 0; ic < N; ic++) 
	{
		if (v[ic] = -1)
		{
			length = ic;
			break;
		}	
	}


}

// remover um elemento de uma posição indicada

// remover todos os elementos iguais a um valor indicado

// gerar um novo vetor sem duplicidades a partir deste array

// programa principal

int main (void)
{
	int el;

	for (int ic = 0; ic < N; ic++)
	{
		v[ic] = -1;
	}

	for (int ic = 0; ic < N; ic++)
	{
		printf("\nEntre com o número da posição %d [-1 para encerrar]: ", ic + 1);
		scanf(" %d", &el);
		if (!(el == -1)) v[ic] = el;
		else break;
		printf("\nElemento %d: %d\n", ic + 1, v[ic]);
	}

	while (option != -1)
	{
		system("clear");
		printf("\nOpções: \n");
		printf("\n[1] Inserir elemento no final do vetor.\n");
		printf("\n[2] Inserir elemento em uma dada posição.\n");
		printf("\n[3] Remover um elemento de uma posição indicada.\n");
		printf("\n[4] Remover todos os elementos iguais a um valor indicado.\n");
		printf("\n[5] Gerar um novo vetor sem duplicidades a partir deste vetor.\n");
		printf("\nEntre com a opção: ");
		scanf(" %d", &option);
		system("clear");

		if (option == 0) break;
		else if(option == 1) 
		{
			printf("\nEntre com o elemento: ");
			scanf(" %d", num);
			inserirFinal(num);
		}
		else if (option == 2)
		{
			printf("\nEntre com o elemento: ");
			scanf(" %d", &num);
			printf("\nEntre com a posição: ");
			scanf(" %d", &pos);
			inserirPos(num, pos);
		}
		else if (option == 3)
		{
			printf("\nEntre com a posição: ");
			scanf(" %d", &pos);
			removerPos(pos);
		}
		else if (option == 4)
		{
			printf("\nEntre com o valor: ");
			scanf(" %d", &num);
		}
		else if (option == 5)
		{
			novoArray();
		}

		mostrarArray();
		
	}

	return 1;
}
