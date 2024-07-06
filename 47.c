#include<stdio.h>
int main (void)
{
	int A, B, q, r;
	q = 0;
	for (int c = 1; c <= 2; c++)
	{
		printf("\nEntre com o %d número: ", c);
		if (c == 1) scanf(" %d", &A);
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
		while(B >= A)
		{
			B -= A;
			q++;
		}
		r = B;
	}
	printf("\nO quociente foi: %d, enquanto o resto foi: %d.\n", q, r);
}
