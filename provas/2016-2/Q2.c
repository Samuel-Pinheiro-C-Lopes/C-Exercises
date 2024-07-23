// QUESTÃO II
// Escreva um programa que escreva os 20 primeiros termos da série de Recamán
#include<stdio.h>

// Verifica se há réplicas do número #r no vetor #v
int verificarArr(int v[20], int r)
{
	int replica = 0;

	for (int ic = 0; ic < 20; ic++)
	{
		if (replica || v[ic] == -1) break;
		if (v[ic] == r) replica = 1;
	}

	if (!replica) return 1;
	else return 0;
}

int main (void)
{
	int v[20];
	int n0;

	// inicializa tudo com -1 para melhorar a 
	// otimização do verificador (ele saberá quando
	// o vetor 'acabou'
	for(int ic = 0; ic < 20; ic++)
		v[ic] = -1;

	for (int ic = 0; ic < 20; ic++)
	{
		// An = A(n-1) - n
		n0 =  v[ic - 1] - ic;
		if (ic == 0) 
		{
			//A0 = 0
			v[ic] = 0;
		}
		else if(verificarArr(v, n0) && n0 > 0)
		{
			//n0 > 0 && não tiver ocorrência
			v[ic] = n0;
		}
		else
		{
			// An = A(n - 1) + 1 caso contrário
			v[ic] = n0 + (ic * 2);
		}

	}

	// saída para o usuário

	printf("\nSérie de Recamán até o 20° termo: ");

	for (int ic = 0; ic < 20; ic++)
	{
		if (ic < 19)
		{
			printf(" %d,", v[ic]);
			continue;

		}
		else
			printf(" %d.\n", v[ic]);
	}


	return 1;
}

/*
ESBOÇO
0 ->  0
1 ->  0 + 1 = 1
2 -> 1 + 2 = 3
3 -> 3 + 3 = 6
4 -> 6 - 4 = 2
5 -> 2 + 5 = 7
6 -> 7 + 6 = 13
7 -> 13 + 7 = 20
8 
9
10
*/	
