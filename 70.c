#include<stdio.h>
#define n (100)
int main (void)
{
	int v[n];	
	for (int ic = 0; ic < 100; ic++) scanf(" %d", &v[ic]);
	for (int ic = 0; ic < 100; ic++) printf("\n%d\n", v[ic]);
	return 1;
}
