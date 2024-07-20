#include<stdio.h>
int main (void)
{

	int p1, p2;
	int v;
	int t;

	for (int ic1 = 500; ic1 < 1001; ic1 += 2)
	{
		t = 0;
		// verificar cada número entre 2 e o #ic1 atual
		for (int ic2 = 2; ic2 < ic1; ic2++)
		{
			// verificar se o número é primo.
			
			v = 0;

			for (int ic3 = 1; ic3 <= ic2/2; ic3++)
			{
				if (ic2%ic3 == 0) v++;
				if (v > 1) break;
			}

			// se o número for primo, inicializar p1 e p2.
			if (v == 1) {  p1 = ic2; p2 = ic1 - p1; }
			
			// verificar se p2 é realmente primo

			v = 0;
			
			for (int ic3 = 1; ic3 <= p2/2; ic3++)
			{
				if (p2%ic3 == 0) v++;
				if (v > 1) break;
			}

			// se for...
			if (v == 1) 
			{
			       	printf("\n %d + %d = %d\n", p1, p2, ic1);
				t = 1;
				break;
			}
		}
		if (t != 1) 
		{
		  printf("\n%d fugiu da regra.\n", ic1); 
		  return 0;
		}
	}

			









	/*
	int v;
	int prim1;

			else printf("\n %d + %d = %d Error, não é!\n", p1, p2, ic1);
	for (int ic1 = 500; ic1 < 1001; ic1+= 2)
	{
		for (int ic2 = 1; ic2 <= ic1; ic2++)
		{
			v = 0;
			for (int ic3 = 1; ic3 <= ic2/2; ic3++)
			{
				if (ic2%ic3 == 0) v++;
				if (v > 1) break;
			}
			if (v == 1) 
			{
				prim1 = ic2;
				v = 0;
				for (int ic3 = 1; ic3 <= ic1 - prim1; ic3++)
				{
					if ((ic1 - prim1)%ic3 == 0) v++;
					if (v > 1) break;
				}
				if (v == 1)
				{
					printf("\nVálido para %d, soma de %d com %d.\n", ic1, prim1, ic1 - prim1);
				}
				else printf("\nNão válido para %d.\n", ic1);
			}

		}
	}
	return 1;

	*/
	/*
	// verificar se é primo:
	int v = 0;
	int N;
	printf("\nEntre com um número inteiro qualquer: ");
	scanf(" %d", &N);

	for (int c = 1; c <= N/2; c++)
	{
		if (N%c == 0) v++;
		if (v > 1) break;
	}

	if (v == 1) printf("\nÉ primo.\n");
	else printf("\nNão é primo.\n");
	return 1;
	*/
}
