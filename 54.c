#include<stdio.h>
int main (void)
{
	int num;
	int v = 0;
	int n = 0;
	printf("\nEntre com um número: ");
	scanf(" %d", &num);
	for (int c = 1; c <= num; c++)
	{
		n = ((c-1) * (c) * (c+1)); 
		if (n == num)
		{
			v = 1;
			break;
		}
		if (n > num) break;
	}
	if (v) printf("\nO número é triangular!\n");
	else printf("\nO número não é triangular...\n");
	return 1;
}
