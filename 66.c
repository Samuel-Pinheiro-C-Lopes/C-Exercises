#include<stdio.h>
int main (void)
{
	int v[10];
	int r[10];

	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nEntre com o valor da posição %d: ", ic + 1);
		scanf(" %d", &v[ic]);
	}

	for (int ic = 0; ic < 10; ic++)
	{
		r[ic] = v[ic];
		printf("\nPosição %d: %d.\n", ic + 1, r[ic]);
	}
	return 1;
}
