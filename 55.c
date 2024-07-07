#include<stdio.h>
int main (void)
{
	int A;
	int B;
	int soma = 0;
	int v = 0;
	printf("\nEntre com o primeiro número: ");
	scanf(" %d", &A);
	printf("\nEntre com o segundo número: ");
	scanf(" %d", &B);
	for (int c = 1; c <= A; c++)
	{
		if (A%c == 0)
		{
			soma += c;
		}
		if (soma == B) { v++; break; }
	}
	soma = 0;
	for (int c = 1; c <= B; c++)
	{
		if (B%c == 0)
		{
			soma += c;
		}
		if (soma == A) { v++; break; }
	}
	if (v == 2) printf("\nOs números são amigos.\n");
	else printf("\nOs números não são amigos...\n");
}
