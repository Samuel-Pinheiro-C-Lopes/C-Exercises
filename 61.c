#include<stdio.h>
int main (void)
{
	int arr[20];

	for (int ic = 0; ic < 20; ic++)
	{
		arr[ic] = 0;
		printf("\n%d° -> %d\n", ic + 1, arr[ic]);
	}

	return 1;
}
