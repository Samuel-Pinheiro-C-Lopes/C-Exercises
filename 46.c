#include<stdio.h>
int main (void)
{
	int A, B, q, r;
	q = 0;
	r = 0;
	for (int c = 0; c < 2; c++)
	{
		printf("\nEntre com o %d número: ", c + 1);
		if (c) scanf(" %d", &A);
		else scanf(" %d", &B);
	}
	if (A > B)
	{
		while (A >= B)
		{
			A -= B;
			q++;
		}
		r = A;
	}
	else
	{
		while (B >= A)
		{
			B -= A;
			q++;
		}
		r = B;
	}
	printf("\nO número maior dividido pelo menor é %d, com resto de %d.\n", q, r);
	return 1;
}
