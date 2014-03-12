#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int 	x = 3,
			*p = NULL;

	p = &x;

	printf("%d %d\n", x, *p);
	printf("%p %p\n", &x, p);

	return 0;
}
