#include <stdio.h>

static int subsum = 0;
extern int sum;

void accumulate (int k);

void accumulate (int k) {
	
	int sum = 0, i;
	
	for (i = k; i > 0; i--)
		sum += i;
	
	subsum += sum;
	
	printf ("Sum = %d\nSumFull = %d\n", sum, subsum);
	
}
