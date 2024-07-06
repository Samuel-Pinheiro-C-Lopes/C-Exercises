#include<stdio.h>
int main(void)
{
	int n, sum;
	sum = 0;
	for (int c = 0; c < 5; c++)
	{
		printf("\nEntre com o %d número: ", c + 1);
		scanf(" %d", &n);
		sum += n;
		n = 0;
	}
	printf("\nA média dos números entrados é: %d\n", sum/5);
}
