#include<stdio.h>
#include<stdlib.h>

#define N (30)

// variáveis globais a serem manipuladas 
// pelo programa
int v[N];
int nv[N];
int tamanho;

// mostrar vetor atual

int mostrarVetor(void)
{
	int a;
	printf("\n---------------------\n");

	for (int ic = 0; ic < tamanho; ic++)
	{
		// mostra os elementos de cada posição ou vazio caso 
		// seja igual a -1 - número tomado como 'vazio' para
		// este programa
		if (v[ic] != -1)
			printf("|Elemento %d: %d|\n", ic + 1, v[ic]);
		else
			printf("|Elementos %d: vazio|\n", ic + 1);
	}
	
	printf("\n---------------------\n");

	printf("\n\nDigite qualquer tecla para continuar: ");
	scanf(" %d", &a);	

	return a;
}

// tamanho do vetor

int tamanhoVetor(void)
{

	// tamanho é denotado como o valor de sentinela
	tamanho = N;

	for (int ic = N - 1; ic >= 0; ic--) 
	{
		// quando o primeiro elemento diferente de -1
		// surgir, é o início do vetor
		if (v[ic] == -1) tamanho = ic;
		// quando seu início for alcançado, encerre as 
		// iterações
		else break;
	}

	return tamanho;
}


int verificarPos(int pos)
{

	// verifica-se se o tamanho excede 
	// a posição 
	if (tamanho > pos - 1)
	{
		// 'verdadeiro' se for o caso
		return 1;
	}
	else
	{
		// 'falso' se não for o caso
		return 0;
	}
}

// inserir um elemento no final do vetor 

int inserirFinal (int num)
{

	// elemento do índice equivalente a #tamanho 
	// tem seu valor designado - tamanho está como 1-*,
	// enquanto o vetor 0-*
	v[tamanho] = num;

	// atualizar tamanho do vetor
	tamanhoVetor();

	// mostrar vetor atual
	mostrarVetor();

	return 1;
}

// inserir um elemento em uma dada posição

int inserirPos (int num, int pos)
{
	
	// 1 se a posição de entrada estiver dentro do 
	// tamanho do vetor, 0 caso contrário
	int verificar = verificarPos(pos);

	if (!verificar)
	{
		// nesse caso a posição excede o tamanho
		printf("\nA posição inserida %d excede o tamanho %d do vetor.", pos, tamanho);
	}
	else
	{
		// atribui-se o valor de entrada à posição de entrada
		// (-1 pois a entrada não é 0-*, mas sim 1-*
		v[pos - 1] = num;
	}

	// mostrar estado atual do vetor
	mostrarVetor();

	return 1;

}

// remover um elemento de uma posição indicada

int removerPos(int pos)
{
	// 1 caso a posição coincida com o tamanho atual do vetor
	int verificar = verificarPos(pos);

	if (!verificar)
	{
		// nesse caso a posição está além do tamanho do vetor
		printf("\nA posição inserida %d excede o tamanho %d do vetor.", pos, tamanho);
	}
	else
	{
		// nesse caso, torne o valor vazio e, caso seja o último,
		// atualize o tamanho
		v[pos - 1] = -1;
		if (pos == tamanho) tamanhoVetor(); 
	}

	// mostrar o estado atual do vetor
	mostrarVetor();

	return 1;
}

// remover todos os elementos iguais a um valor indicado

int removerEls(int el)
{
	// elementos com valor equivalente ao #el passado como argumento
	// se tornarão 'vazios'
	for (int ic = 0; ic < tamanho; ic++) if (v[ic] == el) v[ic] = -1;

	// tamanho do vetor é atualizado
	tamanhoVetor();

	// mostrar vetor atualmente
	mostrarVetor();

	return 1;
}

// gerar um novo vetor sem duplicidades a partir deste array

int novoVetor(void)
{

	int el1;
	int verificar;

	for (int ic1 = 0; ic1 <= tamanho; ic1++)
	{
		// elemento da iteração atual a ser
		// comparado com os outros do vetor resultante,
		// a fim de evitar valores iguais
		el1 = v[ic1];
		// verificador para a ocorrência prévia de
		// um determinado elemento, inicializado acima como
		// #el1
		verificar = 1;

		for (int ic2 = 0; ic2 <= tamanho; ic2++)
		{
			// caso o #el1 já exista no vetor #nv, verificador
			// torna-se 0
			if (el1 == nv[ic2]) verificar = 0;
		}

		// atribui-se o valor apenas no caso do valor já não
		// ter ocorrência prévia - #verificar não ter sido 
		// alterado
		if (verificar) nv[ic1] = el1;
		// senão será 'vazio'
		else nv[ic1] = -1;
	}

	// todos os elementos do vetor principal do programa
	// terão seus valores mudados para condizerem com o
	// do vetor trabalhado anteriormente
	for (int ic1 = 0; ic1 < N; ic1++)
	{
		v[ic1] = nv[ic1];
	}

	// atualizar tamanho do vetor
	tamanhoVetor();

	// mostrar vetor atual
	mostrarVetor();

	return 1;

}
// programa principal

int main (void)
{
	int el;
	int num;
	int pos;
	int option = 1;

	for (int ic = 0; ic < N; ic++)
	{
		v[ic] = -1;
		nv[ic] = -1;
	}

	for (int ic = 0; ic < N; ic++)
	{
		printf("\nEntre com o número da posição %d [-1 para encerrar]: ", ic + 1);
		scanf(" %d", &el);
		if (!(el == -1)) v[ic] = el;
		else break;
		printf("\nElemento %d: %d\n", ic + 1, v[ic]);
	}
	
	tamanho = tamanhoVetor();

	while (option != -1)
	{
		system("clear");
		printf("\nOpções: \n");
		printf("\n[1] Inserir elemento no final do vetor.\n");
		printf("\n[2] Inserir elemento em uma dada posição.\n");
		printf("\n[3] Remover um elemento de uma posição indicada.\n");
		printf("\n[4] Remover todos os elementos iguais a um valor indicado.\n");
		printf("\n[5] Gerar um novo vetor sem duplicidades a partir deste vetor.\n");
		printf("\n[0] Encerrar o programa.\n");
		printf("\nEntre com a opção: ");
		scanf(" %d", &option);
		system("clear");

		if (option == 0) break;
		else if(option == 1) 
		{
			printf("\nEntre com o elemento: ");
			scanf(" %d", &num);
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
			removerEls(num);
		}
		else if (option == 5)
		{
			novoVetor();
		}

	}

	return 1;
}
