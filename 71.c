#include<stdio.h>
int main (void)
{
	int v[10];
	int n;
	int t = -1;

	for (int ic = 0; ic < 10; ic++)
	{
		printf("\nEntre com o número da %d posição: ", ic + 1);
		scanf(" %d", &v[ic]);
	}

	printf("\nEntre com um número: ");
	scanf(" %d", &n);

	for (int ic = 0; ic < 10; ic++)
	{
		if (v[ic] == n) 
		{
			printf("\nPosição %d.\n", ic + 1);
			t = 1;
			break;
		}
	}

	if (t == -1) printf("\n%d\n", t);
	return 1;
}
