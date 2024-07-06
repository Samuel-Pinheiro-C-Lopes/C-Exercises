#include<stdio.h>
int main (void)
{
	int num;
	printf("Entre com um número: ");
	scanf(" %d", &num);
	for(int c1 = 1; c1 <= 6; c1++)
	{
		for (int c2 = 1; c2 <= 6; c2++)
		{
			if (c1 + c2 == num) printf("\n%d %d\n", c1, c2);
		}
	}
}
