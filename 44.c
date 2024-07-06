#include<stdio.h>
int main(void)
{
	int sum = 0;

	for (int c = 1; c <= 100; c++)
	{
		sum += c;
		printf("%d\n", c);
	}

	printf("\nA soma de todos os números é: %d.\n", sum);
}
