#include <stdio.h>
#include <stdlib.h>

int i;

void main() {
	printf("%d\n", i);
	f();
}

void f() {
	int i;
	printf("%d\n ", i);
}
