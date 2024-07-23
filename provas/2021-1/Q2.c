// QUESTÃO II
// Escrever um programa que receba senha do primeiro jogador - 10 caracteres - e, depois, receber os chutes do segundo jogador.
// Para cada chute, gerar uma saída baseada no jogo da adivinhação de Mordechai Meirovitz
#include<stdio.h>

char senha[10];
char chute[10];
int EB[2];

// verificar com base na lei do jogo de Mordechai Meirovitz
int verificarVetor(char chute[10])
{
	int c;
	int acertos[10];
	
	// inicializar EB 
	for (int ic = 0; ic < 2; ic++)
		EB[ic] = 0;

	// inicializar posição dos acertos do chute
	for (int ic = 0; ic < 10; ic++)
		acertos[ic] = 0;

	// verificar casos em que o índice do chute e valor são iguais ao
	// índice e valor da senha
	for (int ic1 = 0; ic1 < 10; ic1++)
	{
		
		c = chute[ic1];

		for (int ic2 = 0; ic2 < 10; ic2++)
		{
			if (ic2 == ic1)
			{
				if (c == senha[ic2])
				{
					// acrescente 1 nos acertos exatos e
					// denote que essa casa teve um acerto
					// exato, logo nãos erá contabilizada 
					// para acerto inexato
					acertos[ic1]++;
					EB[0]++;
				}
				// se o índice é igual, encerre a o laço de repetição
				// (não haverá mais ocasião onde ic1 == ic2
				break;
			}

		}
	}

	// verificar casos em que valor do chute aparece na senha
	// e ainda não foi acertado anteriormente
	for (int ic1 = 0; ic1 < 10; ic1++)
	{
		c = chute[ic1];

		for (int ic2 = 0; ic2 < 10; ic2++)
		{
			if (c == senha[ic2] && !acertos[ic1]) 
			{
				EB[1]++;
			}
		}
	}

	// saída mostrando a pontuação atual do jogador 2
	printf("\n[%d, %d]\n", EB[0], EB[1]);

	return 1;
}

int main (void)
{
	int v = 1;
	int tentativas = 0;

	// entrada do jogador 1
	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nPrimeiro jogador, entre com o %d caractere da senha: ", ic + 1);
		scanf(" %c", &senha[ic]);
	}

	// enquanto jogador 2 não vencer
	while (v)
	{
		// inicializar / atribuir chute 
		for (int ic = 0; ic < 10; ic++)
		{
			printf("\nSegundo jogador, entre com o %d digito do chute: ", ic + 1);
			scanf(" %c", &chute[ic]);
		}

		// verificar o chute com base na senha e provê saído com
		// a pontuação
		verificarVetor(chute);

		// se houverem 10 acertos exatos, jogador 2 venceu
		if (EB[1] == 0 && EB[0] == 10) v = 0;
		// contabilizar tentativas até o acerto...
		tentativas++;
	}

	// saída de vitória
	printf("\nJogador 2 venceu com %d tentativas.\n", tentativas);

	return 1;

}
