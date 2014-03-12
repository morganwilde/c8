#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// Vars
	char 	c;
	int		x,
			y;
	long 	l[10];

	// Address book
	printf("%p\n", &c);
	printf("%p\n", &x);
	printf("%p\n", &y);

	int i;
	for (i = 0; i < 10; i++)
		printf("%p\n", &l[i]);

	return 0;
}
