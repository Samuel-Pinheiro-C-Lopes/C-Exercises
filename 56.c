#include<stdio.h>
int main (void)
{
	int num, soma;
	soma = 0;
	printf("\nEntre com um número: ");
	scanf(" %d", &num);
	for (int c = 1; c <= num/2; c++)
	{
		if (num%c == 0)
		{
			soma += c;
		}
	}
	if (soma == num) printf("\nO número classifica-se como perfeito.\n");
	else printf("\nO número não classifica-se como perfeito...\n");
	return 1;
}
