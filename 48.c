#include<stdio.h>
int main (void)
{
	int num;
	printf("\nEntre com um número: ");
	scanf(" %d", &num);
	if (num == 1) {
		printf("\nO número não é primo!\n"); return 1; 
	}
	for (int c = 2; c < num/2; c++)
	{
		if (!(num%c)) {
			printf("\nO número não é primo!\n"); return 1; 
		}
	}
	printf("\nO número é primo!\n");
	return 1;
}
