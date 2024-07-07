#include<stdio.h>
int main (void)
{
	float A = 5000000;
	float B = 7000000;
	int c = 0;
	printf("\n...\n");
	while (A <= B)
	{
		A *= 1.03;
		printf("%f\n", A);
		B *= 1.02;
		printf("%f\n", B);
		c++;
	}
	printf("\nForam necessários %d anos para que o país A ultrapassasse o B.\n", c);
	return 1;
}
