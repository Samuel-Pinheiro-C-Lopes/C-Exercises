#include<stdio.h>
int main(void)
{
	for (int c = 1; c <= 100; c++)
	{
		if (!(c % 2))printf("%d\n", c);
	}
}
