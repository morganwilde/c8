#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// Vars
	char 	c;
	int		x,
			y;
	long 	l[10];

	// Address book
	int i;
	for (i = 0; i < 10; i++)
		printf("%llu\n", &l[i]);

	return 0;
}
