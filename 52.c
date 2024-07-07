#include<stdio.h>
int main (void)
{
	int A0, A1, A2;
	printf("\nEntre com os dois números para a sequência de FETUCCINE: ");
	scanf(" %d", &A2);
	printf("e: ");
	scanf(" %d", &A1);
	A0 = A1 + A2;
	printf("\nA sequência corresponde a: %d, %d, %d, ", A2, A1, A0);
	for (int c = 4; c <= 10; c++)
	{
		if (c%2 == 0)
		{
			A0 -=  A1;
			A1 += A0;
			A2 = A0 - A1;
			printf("%d, ", A0);
		}
		else
		{
			A0 += A1;
			A1 = A0 - A1;
			A2 = A0 - A1;
			printf("%d, ", A0);
		}
	}
	printf("...\n");
	return 1;
}
