#include<stdio.h>

int main (void)
{
	char c;
	printf("\nEntre com uma letra: ");
	c = getchar();
	printf("\nSeu número na tabela ASCII é: %d.\n", c);
	return 1;
}
