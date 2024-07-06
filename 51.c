#include<stdio.h>
int main (void)
{
	int num;
	int a1, a2, a3;
	a1 = 1;
	a3 = 0;
	a2 = 0;
	printf("\nEntre com um número: ");
	scanf(" %d", &num);
	for (int c = 0; c < num; c++)
	{
		printf("%d, ", a1);
		a3 = a1;	
		a1 += a2;
		a2 = a3;

	}
	printf(" ...\n");
	return 1;
}
